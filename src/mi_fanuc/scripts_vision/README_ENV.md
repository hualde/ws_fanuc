# 🤖 Detector de Segmentación 3D para Steering Rack

Sistema de detección y segmentación en tiempo real usando YOLOv8 con cámara RGB-D en ROS2.

## 📋 Requisitos Previos

- Ubuntu 22.04
- ROS2 Humble
- Python 3.10
- CUDA 12.x (opcional, para GPU)

## 🔧 Instalación del Entorno Virtual

### 1. Crear el entorno virtual

```bash
cd ~/misCosas/steering
python3 -m venv yolo_train_env
```

### 2. Activar el entorno

```bash
source ~/misCosas/steering/yolo_train_env/bin/activate
```

### 3. Actualizar pip

```bash
pip install --upgrade pip
```

### 4. Instalar dependencias principales

```bash
# PyTorch con soporte CUDA 12.8
pip install torch==2.9.1 torchvision==0.24.1 --index-url https://download.pytorch.org/whl/cu128

# YOLO y Ultralytics
pip install ultralytics==8.4.7

# OpenCV con módulos contrib
pip install opencv-contrib-python==4.10.0.84

# Dependencias científicas
pip install numpy==1.26.4
pip install scipy==1.15.3
pip install matplotlib==3.10.8

# Análisis de datos
pip install polars==1.37.1
pip install psutil==7.2.1

# Utilidades
pip install pyyaml==6.0.3
pip install requests==2.32.5
pip install certifi==2026.1.4
```

### 5. Instalar bridge de ROS2 (fuera del venv)

**IMPORTANTE:** Desactiva el entorno virtual primero:

```bash
deactivate
```

Luego instala el bridge de CV (esto debe hacerse con el Python del sistema):

```bash
sudo apt update
sudo apt install ros-humble-cv-bridge ros-humble-vision-opencv python3-opencv
```

## 📁 Estructura del Proyecto

```
ros2_robotiq_gripper-humble/
├── launch/
├── scripts_vision/
│   └── segment/
│       └── realtime_seg_detector.py
├── weights/                    # ← Crear esta carpeta
│   └── best.pt                # ← Copiar tu modelo aquí
├── urdf/
├── CMakeLists.txt
├── package.xml
└── README_ENV.md              # ← Este archivo
```

## 🚀 Configuración del Script

### 1. Copiar el modelo entrenado

```bash
# Crear carpeta de pesos
mkdir -p ~/ros2_ws/src/ros2_robotiq_gripper-humble/weights

# Copiar el modelo (ajusta la ruta origen según donde esté tu best.pt)
cp ~/misCosas/steering/runs/segment/runs/segment/steering_segmentation/weights/best.pt \
   ~/ros2_ws/src/ros2_robotiq_gripper-humble/weights/
```

### 2. Modificar la ruta en el script

Edita `realtime_seg_detector.py` y cambia la línea del model_path:

```python
# MODELO DE SEGMENTACION (V4)
model_path = os.path.join(
    os.path.dirname(__file__),
    '..',
    '..',
    'weights',
    'best.pt'
)
```

### 3. Hacer el script ejecutable

```bash
chmod +x ~/ros2_ws/src/ros2_robotiq_gripper-humble/scripts_vision/segment/realtime_seg_detector.py
```

## ▶️ Ejecución

### Opción 1: Con el entorno virtual activado

```bash
# Terminal 1: Activar entorno
source ~/misCosas/steering/yolo_train_env/bin/activate
source ~/ros2_ws/install/setup.bash

# Ejecutar el nodo
ros2 run ros2_robotiq_gripper-humble realtime_seg_detector.py
```

### Opción 2: Script de launcher automatizado

Crea un script `run_detector.sh`:

```bash
#!/bin/bash
source ~/misCosas/steering/yolo_train_env/bin/activate
source ~/ros2_ws/install/setup.bash
ros2 run ros2_robotiq_gripper-humble realtime_seg_detector.py
```

Hazlo ejecutable y úsalo:

```bash
chmod +x run_detector.sh
./run_detector.sh
```

## 📊 Topics Publicados

- `/steering_rack_centroid` (geometry_msgs/Point): Centroide 2D
- `/steering_rack_pose` (geometry_msgs/PoseStamped): Pose 3D con orientación

## 📸 Topics Suscritos

- `/rgb` (sensor_msgs/Image): Imagen RGB
- `/depth` (sensor_msgs/Image): Mapa de profundidad

## 🎮 Controles

- **Q**: Salir del programa
- **Sliders en ventana "Masked Depth Map"**:
  - `Min Z (cm)`: Profundidad mínima visible
  - `Max Z (cm)`: Profundidad máxima visible

## 🐛 Solución de Problemas

### Error: "No module named 'ultralytics'"

```bash
source ~/misCosas/steering/yolo_train_env/bin/activate
pip install ultralytics
```

### Error: "No module named 'cv_bridge'"

```bash
sudo apt install ros-humble-cv-bridge python3-opencv
```

### Error: CUDA out of memory

Reduce el tamaño de las imágenes o usa CPU:

```python
# En el script, modifica la predicción:
results = self.model.predict(img, conf=0.5, verbose=False, device='cpu')
```

### Las ventanas OpenCV no aparecen

Verifica que tengas display configurado:

```bash
echo $DISPLAY
# Debería mostrar algo como :0 o :1
```

## 📦 Dependencias Completas (requirements.txt)

Para facilitar la instalación, puedes crear un `requirements.txt`:

```txt
torch==2.9.1
torchvision==0.24.1
ultralytics==8.4.7
opencv-contrib-python==4.10.0.84
numpy==1.26.4
scipy==1.15.3
matplotlib==3.10.8
polars==1.37.1
psutil==7.2.1
pyyaml==6.0.3
requests==2.32.5
pillow==12.1.0
```

Instalar todo de golpe:

```bash
pip install -r requirements.txt
```

## 📝 Notas

- El modelo espera imágenes RGB de 1280x720
- La sincronización RGB-Depth usa `ApproximateTimeSynchronizer` con slop=0.1s
- Los parámetros intrínsecos de la cámara están hardcodeados (fx=fy=634.08)
- La orientación se calcula usando PCA sobre los puntos de la máscara

## 📧 Contacto

Para dudas o problemas, revisa los logs de ROS2:

```bash
ros2 topic echo /rosout
```

---

**Versión:** 1.0  
**Última actualización:** Enero 2026

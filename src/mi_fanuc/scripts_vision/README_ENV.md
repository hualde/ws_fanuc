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
cd ~/misCosas/ws_fanuc/src/mi_fanuc/scripts_vision
python3 -m venv yolo_env
```

### 2. Activar el entorno
```bash
source yolo_env/bin/activate
```

### 3. Actualizar pip e instalar dependencias
```bash
# Actualizar pip
pip install --upgrade pip

# IMPORTANTE: NumPy 1.x para compatibilidad con ROS2 cv_bridge
pip install "numpy<2"

# OpenCV
pip install opencv-python

# YOLO y Ultralytics
pip install ultralytics

# PyTorch (si necesitas GPU con CUDA 12.x)
pip install torch torchvision --index-url https://download.pytorch.org/whl/cu121

# Dependencias adicionales
pip install matplotlib scipy pyyaml
```

### 4. Configurar .gitignore

Asegúrate de tener en tu `.gitignore`:
```gitignore
# Entornos virtuales
yolo_env/
*_env/
venv/
```

## 📁 Estructura del Proyecto
```
mi_fanuc/
├── scripts_vision/
│   ├── realtime_seg_detector.py
│   ├── yolo_env/                    # ← Entorno virtual (ignorado por git)
│   └── segment/
│       └── runs/segment/steering_segmentation/
│           └── weights/
│               └── best.pt          # ← Tu modelo entrenado
├── launch/
└── .gitignore
```

## 🛠️ Funcionalidades del Detector (`realtime_seg_detector.py`)

Este script realiza un análisis avanzado de la pieza detectada integrando visión artificial y geometría 3D:

1.  **Detección y Segmentación**: Utiliza YOLOv8 para identificar y extraer la máscara exacta de la pieza (`steering-rack`).
2.  **Análisis de Pose 3D**:
    *   **Coordenadas Reales**: Calcula la posición `(X, Y, Z)` en metros usando el mapa de profundidad.
    *   **Ángulo Tilt (Inclinación)**: Mediante PCA 3D, determina la inclinación de la pieza respecto al plano de la cámara.
3.  **Centroide Robusto**:
    *   Implementa una lógica de **proyección vertical** para asegurar que el punto de agarre (punto rojo) caiga siempre dentro de la superficie azul, incluso en piezas con formas irregulares o huecos.
4.  **Visualización Avanzada**:
    *   **Flecha Verde**: Eje longitudinal principal (dirección de la pieza).
    *   **Flecha Rosa (Grasp Dir)**: Eje secundario o de agarre. Indica la dirección perpendicular ideal para el ataque de una pinza robótica.
    *   **Panel de Info**: Resumen en tiempo real (Z, Ángulo 2D, Tilt) en la esquina superior izquierda.

---

## 🚀 Ejecución

### Opción 1: Activar entorno y ejecutar
```bash
# Terminal 1: Activar entorno virtual
cd ~/misCosas/ws_fanuc/src/mi_fanuc/scripts_vision
source yolo_env/bin/activate

# Ejecutar el script
python3 realtime_seg_detector.py
```

### Opción 2: Script launcher automatizado

Crea un script `run_detector.sh`:
```bash
#!/bin/bash
cd ~/misCosas/ws_fanuc/src/mi_fanuc/scripts_vision
source yolo_env/bin/activate
python3 realtime_seg_detector.py
```

Hazlo ejecutable y úsalo:
```bash
chmod +x run_detector.sh
./run_detector.sh
```

## 📊 Topics Publicados

- `/steering_rack_pose` (geometry_msgs/PoseStamped): Pose 3D con orientación

## 📸 Topics Suscritos

- `/rgb` (sensor_msgs/Image): Imagen RGB
- `/depth` (sensor_msgs/Image): Mapa de profundidad

## 🎮 Controles

- **Q**: Salir del programa
- **Sliders en ventana "Depth Map"**:
  - `Min Z (cm)`: Profundidad mínima visible
  - `Max Z (cm)`: Profundidad máxima visible

## 🐛 Solución de Problemas

### Error: `_ARRAY_API not found` o incompatibilidad NumPy

Este error ocurre por conflicto entre NumPy 2.x y cv_bridge de ROS2:
```bash
source yolo_env/bin/activate
pip uninstall numpy
pip install "numpy<2"
```

### Error: "No module named 'ultralytics'"
```bash
source yolo_env/bin/activate
pip install ultralytics
```

### Error: "No module named 'cv_bridge'"

El `cv_bridge` viene con ROS2 Humble, asegúrate de tenerlo instalado:
```bash
sudo apt install ros-humble-cv-bridge python3-opencv
```

### Error: CUDA out of memory

Reduce el tamaño de las imágenes o fuerza uso de CPU:
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

## 📦 Recrear el Entorno desde Cero

Si necesitas recrear el entorno limpio:
```bash
# Eliminar entorno anterior
rm -rf yolo_env

# Crear nuevo
python3 -m venv yolo_env
source yolo_env/bin/activate

# Instalar en orden correcto
pip install --upgrade pip
pip install "numpy<2"
pip install opencv-python
pip install ultralytics
pip install torch torchvision matplotlib scipy pyyaml
```

## 📦 Dependencias Completas (requirements.txt)

Puedes crear un `requirements.txt`:
```txt
numpy<2
opencv-python
ultralytics
torch
torchvision
matplotlib
scipy
pyyaml
```

Instalar todo de golpe:
```bash
source yolo_env/bin/activate
pip install -r requirements.txt
```

## 📝 Notas Importantes

- **NumPy 1.x es obligatorio** para compatibilidad con cv_bridge de ROS2 Humble
- El entorno virtual `yolo_env/` está ignorado por git
- El modelo espera imágenes RGB de entrada
- La sincronización RGB-Depth usa `ApproximateTimeSynchronizer`
- Los parámetros intrínsecos de la cámara pueden necesitar ajuste según tu hardware

## 📧 Troubleshooting Logs

Para ver mensajes del nodo:
```bash
# Ver versiones instaladas
pip list | grep -E "numpy|opencv|ultralytics|torch"

# Verificar que NumPy sea 1.x
python3 -c "import numpy; print(numpy.__version__)"
```

---

**Versión:** 2.0  
**Última actualización:** Enero 2025  
**Compatibilidad:** ROS2 Humble + NumPy 1.x
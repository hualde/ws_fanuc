#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "fanuc_libs::stream_motion" for configuration ""
set_property(TARGET fanuc_libs::stream_motion APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(fanuc_libs::stream_motion PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libstream_motion.so"
  IMPORTED_SONAME_NOCONFIG "libstream_motion.so"
  )

list(APPEND _cmake_import_check_targets fanuc_libs::stream_motion )
list(APPEND _cmake_import_check_files_for_fanuc_libs::stream_motion "${_IMPORT_PREFIX}/lib/libstream_motion.so" )

# Import target "fanuc_libs::rmi" for configuration ""
set_property(TARGET fanuc_libs::rmi APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(fanuc_libs::rmi PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/librmi.so"
  IMPORTED_SONAME_NOCONFIG "librmi.so"
  )

list(APPEND _cmake_import_check_targets fanuc_libs::rmi )
list(APPEND _cmake_import_check_files_for_fanuc_libs::rmi "${_IMPORT_PREFIX}/lib/librmi.so" )

# Import target "fanuc_libs::fanuc_client" for configuration ""
set_property(TARGET fanuc_libs::fanuc_client APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(fanuc_libs::fanuc_client PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libfanuc_client.so"
  IMPORTED_SONAME_NOCONFIG "libfanuc_client.so"
  )

list(APPEND _cmake_import_check_targets fanuc_libs::fanuc_client )
list(APPEND _cmake_import_check_files_for_fanuc_libs::fanuc_client "${_IMPORT_PREFIX}/lib/libfanuc_client.so" )

# Import target "fanuc_libs::gpio_config" for configuration ""
set_property(TARGET fanuc_libs::gpio_config APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(fanuc_libs::gpio_config PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libgpio_config.so"
  IMPORTED_SONAME_NOCONFIG "libgpio_config.so"
  )

list(APPEND _cmake_import_check_targets fanuc_libs::gpio_config )
list(APPEND _cmake_import_check_files_for_fanuc_libs::gpio_config "${_IMPORT_PREFIX}/lib/libgpio_config.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)

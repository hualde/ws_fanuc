# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_mi_fanuc_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED mi_fanuc_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(mi_fanuc_FOUND FALSE)
  elseif(NOT mi_fanuc_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(mi_fanuc_FOUND FALSE)
  endif()
  return()
endif()
set(_mi_fanuc_CONFIG_INCLUDED TRUE)

# output package information
if(NOT mi_fanuc_FIND_QUIETLY)
  message(STATUS "Found mi_fanuc: 0.0.0 (${mi_fanuc_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'mi_fanuc' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${mi_fanuc_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(mi_fanuc_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${mi_fanuc_DIR}/${_extra}")
endforeach()

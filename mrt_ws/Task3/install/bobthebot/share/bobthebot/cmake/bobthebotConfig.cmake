# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_bobthebot_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED bobthebot_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(bobthebot_FOUND FALSE)
  elseif(NOT bobthebot_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(bobthebot_FOUND FALSE)
  endif()
  return()
endif()
set(_bobthebot_CONFIG_INCLUDED TRUE)

# output package information
if(NOT bobthebot_FIND_QUIETLY)
  message(STATUS "Found bobthebot: 0.0.0 (${bobthebot_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'bobthebot' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${bobthebot_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(bobthebot_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${bobthebot_DIR}/${_extra}")
endforeach()

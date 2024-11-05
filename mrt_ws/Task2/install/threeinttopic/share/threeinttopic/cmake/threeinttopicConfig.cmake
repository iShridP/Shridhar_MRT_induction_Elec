# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_threeinttopic_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED threeinttopic_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(threeinttopic_FOUND FALSE)
  elseif(NOT threeinttopic_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(threeinttopic_FOUND FALSE)
  endif()
  return()
endif()
set(_threeinttopic_CONFIG_INCLUDED TRUE)

# output package information
if(NOT threeinttopic_FIND_QUIETLY)
  message(STATUS "Found threeinttopic: 0.0.0 (${threeinttopic_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'threeinttopic' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${threeinttopic_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(threeinttopic_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${threeinttopic_DIR}/${_extra}")
endforeach()

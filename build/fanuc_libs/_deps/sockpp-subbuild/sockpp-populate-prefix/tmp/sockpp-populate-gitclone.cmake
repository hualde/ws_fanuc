# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

if(EXISTS "/home/hualde/misCosas/ws_fanuc/build/fanuc_libs/_deps/sockpp-subbuild/sockpp-populate-prefix/src/sockpp-populate-stamp/sockpp-populate-gitclone-lastrun.txt" AND EXISTS "/home/hualde/misCosas/ws_fanuc/build/fanuc_libs/_deps/sockpp-subbuild/sockpp-populate-prefix/src/sockpp-populate-stamp/sockpp-populate-gitinfo.txt" AND
  "/home/hualde/misCosas/ws_fanuc/build/fanuc_libs/_deps/sockpp-subbuild/sockpp-populate-prefix/src/sockpp-populate-stamp/sockpp-populate-gitclone-lastrun.txt" IS_NEWER_THAN "/home/hualde/misCosas/ws_fanuc/build/fanuc_libs/_deps/sockpp-subbuild/sockpp-populate-prefix/src/sockpp-populate-stamp/sockpp-populate-gitinfo.txt")
  message(STATUS
    "Avoiding repeated git clone, stamp file is up to date: "
    "'/home/hualde/misCosas/ws_fanuc/build/fanuc_libs/_deps/sockpp-subbuild/sockpp-populate-prefix/src/sockpp-populate-stamp/sockpp-populate-gitclone-lastrun.txt'"
  )
  return()
endif()

execute_process(
  COMMAND ${CMAKE_COMMAND} -E rm -rf "/home/hualde/misCosas/ws_fanuc/build/fanuc_libs/_deps/sockpp-src"
  RESULT_VARIABLE error_code
)
if(error_code)
  message(FATAL_ERROR "Failed to remove directory: '/home/hualde/misCosas/ws_fanuc/build/fanuc_libs/_deps/sockpp-src'")
endif()

# try the clone 3 times in case there is an odd git clone issue
set(error_code 1)
set(number_of_tries 0)
while(error_code AND number_of_tries LESS 3)
  execute_process(
    COMMAND "/usr/bin/git" 
            clone --no-checkout --config "advice.detachedHead=false" "/home/hualde/misCosas/ws_fanuc/src/fanuc_driver/fanuc_libs/dependencies/sockpp" "sockpp-src"
    WORKING_DIRECTORY "/home/hualde/misCosas/ws_fanuc/build/fanuc_libs/_deps"
    RESULT_VARIABLE error_code
  )
  math(EXPR number_of_tries "${number_of_tries} + 1")
endwhile()
if(number_of_tries GREATER 1)
  message(STATUS "Had to git clone more than once: ${number_of_tries} times.")
endif()
if(error_code)
  message(FATAL_ERROR "Failed to clone repository: '/home/hualde/misCosas/ws_fanuc/src/fanuc_driver/fanuc_libs/dependencies/sockpp'")
endif()

execute_process(
  COMMAND "/usr/bin/git" 
          checkout "afdeacba9448c7a77194eed6ab8e1c0b1653c79a" --
  WORKING_DIRECTORY "/home/hualde/misCosas/ws_fanuc/build/fanuc_libs/_deps/sockpp-src"
  RESULT_VARIABLE error_code
)
if(error_code)
  message(FATAL_ERROR "Failed to checkout tag: 'afdeacba9448c7a77194eed6ab8e1c0b1653c79a'")
endif()

set(init_submodules TRUE)
if(init_submodules)
  execute_process(
    COMMAND "/usr/bin/git" 
            submodule update --recursive --init 
    WORKING_DIRECTORY "/home/hualde/misCosas/ws_fanuc/build/fanuc_libs/_deps/sockpp-src"
    RESULT_VARIABLE error_code
  )
endif()
if(error_code)
  message(FATAL_ERROR "Failed to update submodules in: '/home/hualde/misCosas/ws_fanuc/build/fanuc_libs/_deps/sockpp-src'")
endif()

# Complete success, update the script-last-run stamp file:
#
execute_process(
  COMMAND ${CMAKE_COMMAND} -E copy "/home/hualde/misCosas/ws_fanuc/build/fanuc_libs/_deps/sockpp-subbuild/sockpp-populate-prefix/src/sockpp-populate-stamp/sockpp-populate-gitinfo.txt" "/home/hualde/misCosas/ws_fanuc/build/fanuc_libs/_deps/sockpp-subbuild/sockpp-populate-prefix/src/sockpp-populate-stamp/sockpp-populate-gitclone-lastrun.txt"
  RESULT_VARIABLE error_code
)
if(error_code)
  message(FATAL_ERROR "Failed to copy script-last-run stamp file: '/home/hualde/misCosas/ws_fanuc/build/fanuc_libs/_deps/sockpp-subbuild/sockpp-populate-prefix/src/sockpp-populate-stamp/sockpp-populate-gitclone-lastrun.txt'")
endif()

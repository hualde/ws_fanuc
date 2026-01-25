# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/hualde/misCosas/ws_fanuc/build/fanuc_libs/_deps/sockpp-src"
  "/home/hualde/misCosas/ws_fanuc/build/fanuc_libs/_deps/sockpp-build"
  "/home/hualde/misCosas/ws_fanuc/build/fanuc_libs/_deps/sockpp-subbuild/sockpp-populate-prefix"
  "/home/hualde/misCosas/ws_fanuc/build/fanuc_libs/_deps/sockpp-subbuild/sockpp-populate-prefix/tmp"
  "/home/hualde/misCosas/ws_fanuc/build/fanuc_libs/_deps/sockpp-subbuild/sockpp-populate-prefix/src/sockpp-populate-stamp"
  "/home/hualde/misCosas/ws_fanuc/build/fanuc_libs/_deps/sockpp-subbuild/sockpp-populate-prefix/src"
  "/home/hualde/misCosas/ws_fanuc/build/fanuc_libs/_deps/sockpp-subbuild/sockpp-populate-prefix/src/sockpp-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/hualde/misCosas/ws_fanuc/build/fanuc_libs/_deps/sockpp-subbuild/sockpp-populate-prefix/src/sockpp-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/hualde/misCosas/ws_fanuc/build/fanuc_libs/_deps/sockpp-subbuild/sockpp-populate-prefix/src/sockpp-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()

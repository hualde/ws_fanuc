# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.25.1)

# We name the project and the target for the ExternalProject_Add() call
# to something that will highlight to the user what we are working on if
# something goes wrong and an error message is produced.

project(reflect-cpp-populate NONE)


# Pass through things we've already detected in the main project to avoid
# paying the cost of redetecting them again in ExternalProject_Add()
set(GIT_EXECUTABLE [==[/usr/bin/git]==])
set(GIT_VERSION_STRING [==[2.34.1]==])
set_property(GLOBAL PROPERTY _CMAKE_FindGit_GIT_EXECUTABLE_VERSION
  [==[/usr/bin/git;2.34.1]==]
)


include(ExternalProject)
ExternalProject_Add(reflect-cpp-populate
                     "UPDATE_DISCONNECTED" "False" "GIT_REPOSITORY" "/home/hualde/misCosas/ws_fanuc/src/fanuc_driver/fanuc_libs/dependencies/reflect-cpp" "GIT_TAG" "2a0fdeabe35bdab0e07e05d4f869ca88bd6d2b8c" "PATCH_COMMAND" "bash" "/home/hualde/misCosas/ws_fanuc/src/fanuc_driver/fanuc_libs/dependencies/apply_patch.bash" "/home/hualde/misCosas/ws_fanuc/src/fanuc_driver/fanuc_libs/dependencies/reflectcpp.patch"
                    SOURCE_DIR          "/home/hualde/misCosas/ws_fanuc/build/fanuc_libs/_deps/reflect-cpp-src"
                    BINARY_DIR          "/home/hualde/misCosas/ws_fanuc/build/fanuc_libs/_deps/reflect-cpp-build"
                    CONFIGURE_COMMAND   ""
                    BUILD_COMMAND       ""
                    INSTALL_COMMAND     ""
                    TEST_COMMAND        ""
                    USES_TERMINAL_DOWNLOAD  YES
                    USES_TERMINAL_UPDATE    YES
                    USES_TERMINAL_PATCH     YES
)



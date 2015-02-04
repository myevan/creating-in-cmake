cmake_minimum_required(VERSION 2.8)
cmake_policy(SET CMP0015 NEW)
project(link_library)

link_directories(../../Modules/cppformat)
include_directories(../../Modules/cppformat)
add_executable(link_library.exe main.cpp)
target_link_libraries(link_library.exe format)

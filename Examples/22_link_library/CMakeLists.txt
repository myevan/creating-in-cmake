cmake_minimum_required(VERSION 2.6)
project(link_library)

include_directories("${PROJECT_SOURCE_DIR}/../21_custom_library")
link_directories("${PROJECT_SOURCE_DIR}/../21_custom_library")

add_executable(link_library.exe main.cpp)
target_link_libraries(link_library.exe custom)

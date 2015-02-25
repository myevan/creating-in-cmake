cmake_minimum_required(VERSION 2.6)
project(modular_project)

include_directories("${PROJECT_SOURCE_DIR}/../21_custom_library")
link_directories("${PROJECT_SOURCE_DIR}/../21_custom_library")

include_directories("${PROJECT_SOURCE_DIR}/sub_module")
add_subdirectory("${PROJECT_SOURCE_DIR}/sub_module")

add_executable(modular_project.exe main.cpp)
target_link_libraries(modular_project.exe custom sub_module)

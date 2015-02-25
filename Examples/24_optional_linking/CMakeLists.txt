cmake_minimum_required(VERSION 2.6)

project(optional_linking)

option (USE_SUB_MODULE "Use sub module" ON) 

configure_file (
    "${PROJECT_SOURCE_DIR}/config.h.in"
    "${PROJECT_BINARY_DIR}/config.h"
)
include_directories("${PROJECT_BINARY_DIR}")

include_directories("${PROJECT_SOURCE_DIR}/../21_custom_library")
link_directories("${PROJECT_SOURCE_DIR}/../21_custom_library")
set (LIBS ${LIBS} custom)

if (USE_SUB_MODULE)
    include_directories("${PROJECT_SOURCE_DIR}/sub_module")
    add_subdirectory("${PROJECT_SOURCE_DIR}/sub_module")
    set (LIBS ${LIBS} sub_module)
endif (USE_SUB_MODULE)

add_executable(optional_linking.exe main.cpp)
target_link_libraries(optional_linking.exe ${LIBS})

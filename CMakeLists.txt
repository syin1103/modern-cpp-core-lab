cmake_minimum_required(VERSION 3.16)

project(modern_cpp_core_lab)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

file(GLOB_RECURSE ALL_CC_FILES
    ${CMAKE_SOURCE_DIR}/*.cc
)

foreach(CC_FILE ${ALL_CC_FILES})
    get_filename_component(FILE_NAME ${CC_FILE} NAME_WE)
    add_executable(${FILE_NAME} ${CC_FILE})
endforeach()

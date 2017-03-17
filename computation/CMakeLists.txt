#project(NestingProj)
cmake_minimum_required(VERSION 2.8.2)

include_directories(${PROJECT_SOURCE_DIR}/square)
include_directories(${PROJECT_SOURCE_DIR}/squareRoot)

link_directories(${PROJECT_BINARY_DIR}/square)
link_directories(${PROJECT_BINARY_DIR}/squareRoot)

add_executable(computation main.cxx)
target_link_libraries(computation square squareRoot)
target_compile_features(computation PRIVATE cxx_range_for)

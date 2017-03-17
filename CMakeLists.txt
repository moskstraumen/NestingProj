project(NestingProj)
cmake_minimum_required(VERSION 2.8.2)

option(BUILD_WITH_SQUARE "Build library of computing square" "ON")
option(BUILD_WITH_SQUAREROOT "Build library of computing square root" "ON")
option(BUILD_WITH_GUI "Build gui" "ON")

add_subdirectory(computation)

if(BUILD_WITH_SQUARE)
    add_subdirectory(square)
endif(BUILD_WITH_SQUARE)

if(BUILD_WITH_SQUAREROOT)
    add_subdirectory(squareRoot)
endif(BUILD_WITH_SQUAREROOT)

if(BUILD_WITH_GUI)
    add_subdirectory(gui)
endif(BUILD_WITH_GUI)

include(CPack)
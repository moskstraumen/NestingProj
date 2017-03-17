cmake_minimum_required(VERSION 2.8.2)

add_library(squareRoot SHARED squareRoot.cxx)
target_compile_features(squareRoot PRIVATE cxx_range_for)

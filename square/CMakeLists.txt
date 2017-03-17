cmake_minimum_required(VERSION 2.8.2)

add_library(square SHARED square.cxx)
target_compile_features(square PRIVATE cxx_range_for)

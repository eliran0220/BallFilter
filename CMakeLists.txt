cmake_minimum_required(VERSION 3.12)
project(BallFilterTask)

set(CMAKE_CXX_STANDARD 14)

add_executable(BallFilterTask main.cpp Pixel.cpp Pixel.hpp Sphere.cpp Sphere.hpp Image.cpp Image.hpp BallFilter.cpp BallFilter.hpp Constants.hpp)
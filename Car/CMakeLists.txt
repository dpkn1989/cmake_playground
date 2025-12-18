cmake_minimum_required(VERSION 3.3.0)

set(CMAKE_CXX_STANDARD 17)

add_library(car_lib Car.cpp)

target_include_directories(car_lib PUBLIC include)

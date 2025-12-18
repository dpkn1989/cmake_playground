cmake_minimum_required(VERSION 3.3.0)

set(CMAKE_CXX_STANDARD 17)

project(cmake_learning VERSION 1.0.0 LANGUAGES CXX)

add_library(car_lib Car.cpp)

target_include_directories(car_lib PUBLIC include)

add_executable(cmake_learning main.cpp)

target_link_libraries(cmake_learning car_lib)
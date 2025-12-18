cmake_minimum_required(VERSION 3.3.0)

set(CMAKE_CXX_STANDARD 20)

project(process_findpkg VERSION 1.0.0 LANGUAGES CXX)

find_package(car_lib REQUIRED)

if(car_lib_FOUND)
    message(STATUS "car_lib found successfully.")
else()
    message(FATAL_ERROR "car_lib not found.")
endif()

add_executable(process_findpkg main.cpp)

target_link_libraries(process_findpkg PRIVATE car_lib)


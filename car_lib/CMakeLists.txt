cmake_minimum_required(VERSION 3.3.0)

set(CMAKE_CXX_STANDARD 17)

add_library(car_lib src/Car.cpp)

target_include_directories(car_lib PUBLIC 
$<INSTALL_INTERFACE:include>
$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/include/car_lib/Car.h DESTINATION ${CMAKE_INSTALL_PREFIX}/include/car_lib)

install(TARGETS car_lib EXPORT car_export DESTINATION ${CMAKE_INSTALL_PREFIX}/lib/car_lib)

install(EXPORT car_export FILE car_lib-config.cmake DESTINATION ${CMAKE_INSTALL_PREFIX}/lib/car_lib)
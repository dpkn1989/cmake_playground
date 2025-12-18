cmake_minimum_required(VERSION 3.3.0)

set(CMAKE_CXX_STANDARD 17)

project(cmake_learning VERSION 1.0.0 LANGUAGES CXX)

add_subdirectory(car_lib)

add_executable(cmake_learning main.cpp)

target_link_libraries(cmake_learning car_lib)

########################################################################################

set(NAME "Praveenkumar Darapureddy")
set(DEVOTEE "LORD SITARAM")
set(AGE 36)
set(PRINT YES)

# More on list, string & file operations in Udemy course or cmake website

if(PRINT)
    message("Hello, my name is ${NAME} and my age is ${AGE}. I am a devotee of ${DEVOTEE}.")
else()
    message("Printing is disabled.")
endif()

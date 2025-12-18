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

# More on list, string & file operations in Udemy course & cmake website

if(PRINT)
    message("Hello, my name is ${NAME} and my age is ${AGE}. I am a devotee of ${DEVOTEE}.")
else()
    message("Printing is disabled.")
endif()

if(EXISTS "${CMAKE_SOURCE_DIR}/main.cpp")
    message("The file main.cpp exists.")
else()
    message("The file main.cpp does not exist.")
endif()

set(LORD RAMA)
while(NOT LORD STREQUAL "RAMA RAMA RAMA")
    set(LORD "${LORD} RAMA")
    message("${LORD}")
endwhile()

foreach(WORD SRI SITA RAMA)
    message("${WORD}")
endforeach()

foreach(NUM RANGE 5)
    message("Number: ${NUM}")
endforeach()

foreach(NUM RANGE 3 12 3)
    message("Number with step 3: ${NUM}")    
endforeach()

function(PrintMessage MSG)
    message("I am a ${MSG} of ${${MSG}}")
endfunction()

function(PrintMessage MSG)
    message("My ${MSG} is ${${MSG}}")
endfunction()

PrintMessage(NAME)
PrintMessage(AGE)

_PrintMessage(DEVOTEE)

function(NameChange NAME_VAR)
    set(${NAME_VAR} "RadhaKrishna" PARENT_SCOPE)
    message("Inside Function: ${${NAME_VAR}}")
endfunction()

message("Before Function Call: ${DEVOTEE}")
NameChange(DEVOTEE)
message("After Function Call: ${DEVOTEE}")
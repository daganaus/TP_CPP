cmake_minimum_required(VERSION 3.10)

# Project name
project(TP2)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Compiler flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

# Source files (uncomment the exercise to test)
set(SRCS tp2.exo1.func.cpp tp2.exo3.cpp)
# set(SRCS tp2.exo1.func.cpp tp2.exo2.cpp)
# set(SRCS tp2.exo1.func.cpp tp2.exo1.main.cpp)

# Target executable (uncomment the exercise to test)
set(TARGET tp2.exo3)
# set(TARGET tp2.exo2.exe)
# set(TARGET tp2.exo1.exe)

# Add executable
add_executable(${TARGET} ${SRCS})

# Clean up build files
add_custom_target(clean_all
    COMMAND ${CMAKE_COMMAND} -E remove ${TARGET} ${CMAKE_BINARY_DIR}/*.o
)
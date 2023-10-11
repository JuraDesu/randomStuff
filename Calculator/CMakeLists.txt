 # stop if cmake version is below 3.0
cmake_minimum_required(VERSION 3.5)

# project name and enable C++ support
project(calc.cpp LANGUAGES CXX)

# require C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# we define the executable
add_executable(calc.x "")

target_sources(
  calc.x
  PRIVATE
    algorithms.cpp
  )

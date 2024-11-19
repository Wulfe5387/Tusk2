cmake_minimum_required(VERSION 3.29)
project(untitled1)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled1 main.cpp
        Classes/UniformDistanceCalculator.cpp
        Classes/UniformDistanceCalculator.h
        Classes/AccelaratedDistanceCalculator.cpp
        Classes/AccelaratedDistanceCalculator.h
        Classes/DistanceCalculatorBase.cpp
        Classes/DistanceCalculatorBase.h)

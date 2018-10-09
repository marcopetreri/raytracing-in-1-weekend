cmake_minimum_required(VERSION 3.0)

project(rti1we)

set(PROJECT_OUT_NAME "${CMAKE_PROJECT_NAME}.out")
set(CXX_FLAGS "-std=c++11")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${CXX_FLAGS}")

add_executable(${PROJECT_OUT_NAME} main.cpp)
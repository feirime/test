cmake_minimum_required(VERSION 3.21)
project(untitled2)

set(CMAKE_CXX_STANDARD 14)
include_directories(${PROJECT_SOURCE_DIR}/headers)
file(GLOB sources ${PROJECT_SOURCE_DIR}/sources/*.cpp)
file(GLOB headers ${PROJECT_SOURCE_DIR}/headers/*.h)
add_executable(untitled2 main.cpp ${sources} ${headers})

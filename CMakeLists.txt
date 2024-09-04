cmake_minimum_required(VERSION 3.21)
project(testCpp)
 
set(CMAKE_CXX_STANDARD 17)
set (ARGUMENTUM_BUILD_STATIC_LIBS ON)

add_subdirectory(external/argumentum)
include_directories(${PROJECT_SOURCE_DIR}/headers ${PROJECT_SOURCE_DIR}/external/argumentum/include)

file(GLOB sources ${PROJECT_SOURCE_DIR}/sources/*.cpp)
file(GLOB headers ${PROJECT_SOURCE_DIR}/headers/*.h)

add_executable(testCpp main.cpp ${sources} ${headers})

target_link_libraries(testCpp Argumentum::argumentum)

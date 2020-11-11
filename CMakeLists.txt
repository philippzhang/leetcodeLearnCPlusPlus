cmake_minimum_required(VERSION 3.14)
project(leetcodeLearnCPlus)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_BUILD_TYPE Debug)

add_executable(main1 main1.cpp)
add_executable(main2 main2.cpp)

add_subdirectory(c1)
add_subdirectory(lc0001)
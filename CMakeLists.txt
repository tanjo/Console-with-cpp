cmake_minimum_required(VERSION 3.1)

project(TJConsole)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(SOURCE_FILES main.cc tj_console.cc)

add_executable(TJConsole ${SOURCE_FILES})

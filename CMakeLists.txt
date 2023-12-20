cmake_minimum_required(VERSION 3.15)
project(exercise CXX)

set(CMAKE_CXX_STANDARD 17)

add_executable(publisher 
    ${CMAKE_SOURCE_DIR}/src/shape.cpp
    ${CMAKE_SOURCE_DIR}/src/publisher.cpp
    ${CMAKE_SOURCE_DIR}/src/publisher_main.cpp
)

target_include_directories(publisher PRIVATE ${CMAKE_SOURCE_DIR}/include)


add_executable(test_sanity
    ${CMAKE_SOURCE_DIR}/src/coordinates.cpp
    ${CMAKE_SOURCE_DIR}/src/shape.cpp
    ${CMAKE_SOURCE_DIR}/src/square.cpp
    ${CMAKE_SOURCE_DIR}/src/circle.cpp
    ${CMAKE_SOURCE_DIR}/src/publisher.cpp
    ${CMAKE_SOURCE_DIR}/src/subscriber.cpp
    ${CMAKE_SOURCE_DIR}/test/sanity.cpp
)

target_include_directories(test_sanity PRIVATE ${CMAKE_SOURCE_DIR}/include)
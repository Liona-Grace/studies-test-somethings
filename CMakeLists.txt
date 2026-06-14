cmake_minimum_required(VERSION 3.16)

project(studies-test-somethings)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(
    studies
    main.cpp
)

target_include_directories(
    studies
    PRIVATE
    ${CMAKE_SOURCE_DIR}
)
cmake_minimum_required(VERSION 3.29)
project(ArtWork_Label)

set(CMAKE_CXX_STANDARD 14)
set(CXXTEST_INCLUDE_DIR /Users/ramon/Documents/cxxtest-4.4)

set(CXXTEST_PYTHON_TESTGEN_EXECUTABLE /Users/ramon/Documents/cxxtest-4.4/bin/cxxtestgen)

find_package(CxxTest REQUIRED)

if(CXXTEST_FOUND)
    include_directories(${CXXTEST_INCLUDE_DIR})
    enable_testing()

    CXXTEST_ADD_TEST(unittest
            runner.cpp  # THIS IS GENERATED BUT YOU NEED TO ADD IT HERE
            ${CMAKE_CURRENT_SOURCE_DIR}/Artwork.cpp Artist.cpp  # add source files
            ${CMAKE_CURRENT_SOURCE_DIR}/newCxxtest.h  # YOUR TEST DESCRIPTION FILE
    )

endif()

add_executable(ArtWork_Label main.cpp
        Artist.cpp
        Artist.h
        Artwork.cpp
        Artwork.h
        newCxxtest.h)

# @file CMakeLists.txt
# 
# CMake files for the palindrome program

cmake_minimum_required(VERSION 3.25)

# project info
project(Palindrome)

# C++17
set(CMAKE_CXX_STANDARD 17)

# Turn on warnings
if (MSVC)
    # warning level 4
    add_compile_options(/W4)
else()
    # standard warnings
    add_compile_options(-Wall)
endif()

# Rainfall program
add_executable(Palindrome test_palindromes.cpp)
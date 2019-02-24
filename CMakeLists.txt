cmake_minimum_required(VERSION 3.13)
project(STACK C)

set(CMAKE_C_STANDARD 11)

add_executable(STACK main.c node.c node.h stack.c stack.h)
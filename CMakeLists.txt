cmake_minimum_required(VERSION 3.14)
project(Quotemaker)

set(CMAKE_CXX_STANDARD 14)

add_executable(Quotemaker main.cpp Product.cpp Product.h Printhead.cpp Printhead.h)
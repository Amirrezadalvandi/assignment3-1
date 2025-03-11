cmake_minimum_required(VERSION 3.30)
project(assignment3)

set(CMAKE_CXX_STANDARD 20)

add_executable(assignment3 main.cpp
        car.cpp
        car.h
        standardcar.cpp
        standardcar.h
        luxurycar.cpp
        luxurycar.h
        company.cpp
        company.h
        customer.cpp
        customer.h)

cmake_minimum_required(VERSION 3.13)
project(morseReader)

set(CMAKE_CXX_STANDARD 14)

add_executable(morseReader main.cpp MorseReader.cpp MorseReader.h Morse.cpp Morse.h)
cmake_minimum_required(VERSION 3.10)
project(Musiker)

set(CMAKE_CXX_STANDARD 11)

add_executable(Musiker main.cpp Musiker.h Trompete.h Orchester.h Klavier.h MusikInstrument.h)
cmake_minimum_required(VERSION 3.8)
project(castor)

add_subdirectory(../../Ensor/Communicator ../../Ensor/Communicator/_build)
add_subdirectory(../../Ensor/PrintManager ../../Ensor/PrintManager/_build)

add_executable(castor
    src/Castor/castor.h
    src/Castor/castor.cpp
    src/Castor/program.cpp)

target_include_directories(castor
    PUBLIC src)

target_link_libraries(castor
    PRIVATE communicator printmanager)

install(TARGETS castor DESTINATION bin)

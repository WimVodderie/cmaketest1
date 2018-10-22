cmake_minimum_required(VERSION 3.8)
project(communicator)

add_library(communicator STATIC
    src/Communicator/communicator.h
    src/Communicator/communicator.cpp)

target_include_directories(communicator
    PUBLIC src)

install(TARGETS communicator DESTINATION lib)
install(FILES src/communicator.h DESTINATION include)

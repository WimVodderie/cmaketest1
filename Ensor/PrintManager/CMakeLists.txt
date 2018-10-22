cmake_minimum_required(VERSION 3.8)
project(printmanager)

add_library(printmanager STATIC
    src/PrintManager/printmanager.h
    src/PrintManager/printmanager.cpp)

target_include_directories(printmanager
    PUBLIC src)

target_link_libraries(printmanager
    PRIVATE communicator)

install(TARGETS printmanager DESTINATION lib)
install(FILES src/printmanager.h DESTINATION include)

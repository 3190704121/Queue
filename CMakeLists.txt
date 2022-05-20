cmake_minimum_required(VERSION 3.20)
project(Queue)

set(CMAKE_CXX_STANDARD 14)

add_executable(Queue main.cpp Header_file.h SqQueue.cpp SqQueue.h LinkQueue.cpp LinkQueue.h)

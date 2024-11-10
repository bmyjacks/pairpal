cmake_minimum_required(VERSION 3.29)
project(pairpal)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)

add_executable(pairpal src/ui/ui.cpp)

#set_target_properties(pairpal PROPERTIES LINKER_LANGUAGE CXX)

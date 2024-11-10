cmake_minimum_required(VERSION 3.29)
project(pairpal)

set(CMAKE_CXX_STANDARD 20)

enable_testing()

include_directories(include)

add_library(util src/util.cpp)

add_executable(pairpal src/ui/ui.cpp)

add_executable(tests test/test_util.cpp)
target_link_libraries(tests util)

add_test(NAME test_util COMMAND tests)
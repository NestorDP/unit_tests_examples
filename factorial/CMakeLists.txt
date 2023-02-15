cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(factorial)

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

include_directories(include)

add_executable(factorial src/main.cpp src/factorial.cpp)
 
# Link runTests with what we want to test and the GTest and pthread library
add_executable(runTests test/test_main.cpp src/factorial.cpp)
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)
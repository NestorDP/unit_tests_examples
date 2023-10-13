cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(unit_test_examples)

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

include_directories(include)

add_executable(${PROJECT_NAME} src/main.cpp src/factorial.cpp src/square_root.cpp)
 
# Link runTests with what we want to test and the GTest and pthread library
add_executable(runTests test/test_main.cpp src/factorial.cpp src/square_root.cpp)
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)
cmake_minimum_required(VERSION 3.28)

# Project Name
project(Calculator)

# Set C++ Standard
set(CMAKE_CXX_STANDARD 14)

# Add source file
add_executable(test_calculator test/test_calculator.cpp)

# Link Google Test Libraries
find_package(GTest REQUIRED)
target_link_libraries(test_calculator GTest::GTest GTest::Main pthread)

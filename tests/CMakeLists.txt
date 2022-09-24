cmake_minimum_required(VERSION 3.16)

add_subdirectory(lib/googletest)
set(gtest_SOURCE_DIR, ./lib/googletest/)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(Google_Tests_run ItemTest.cpp ShoppingListTest.cpp runAllTests.cpp)
target_link_libraries(Google_Tests_run gtest gtest_main core)
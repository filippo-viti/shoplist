project(Google_tests)

add_subdirectory(lib)
set(gtest_SOURCE_DIR, ./lib/googletest/)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(Google_Tests_run ItemTest.cpp ShoppingListTest.cpp UserTest.cpp runAllTests.cpp MissingItemsBadgeTest.cpp ShoppingListViewerTest.cpp)
target_link_libraries(Google_Tests_run gtest gtest_main)
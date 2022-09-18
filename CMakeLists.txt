cmake_minimum_required(VERSION 3.16)
project(shoplist)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(tests)

set(SOURCE_FILES src/User.cpp src/User.h src/ShoppingList.cpp src/ShoppingList.h src/Item.cpp src/Item.h src/Observer.h src/Subject.h src/ShoppingListViewer.cpp src/ShoppingListViewer.h src/MissingItemsBadge.cpp src/MissingItemsBadge.h)
add_executable(shoplist main.cpp)
add_library(core ${SOURCE_FILES})
target_link_libraries(shoplist core)
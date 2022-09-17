cmake_minimum_required(VERSION 3.16)
project(shoplist)

set(CMAKE_CXX_STANDARD 14)

add_executable(shoplist main.cpp src/User.cpp src/User.h src/ShoppingList.cpp src/ShoppingList.h src/Item.cpp src/Item.h src/Observer.h src/Subject.h src/ShoppingListViewer.cpp src/ShoppingListViewer.h src/MissingItemsBadge.cpp src/MissingItemsBadge.h)
add_subdirectory(Google_tests)
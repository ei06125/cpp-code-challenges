# Copyright (C) ei06125. All Rights Reserved.

add_library(BinaryTree INTERFACE BinaryTree.hpp)
target_include_directories(BinaryTree INTERFACE ${CMAKE_CURRENT_LIST_DIR})
add_library(LeetCode::BinaryTree ALIAS BinaryTree)

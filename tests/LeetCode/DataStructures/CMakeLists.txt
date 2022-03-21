# Copyright (C) ei06125. All Rights Reserved.

add_executable(BinaryTreeBehaviourTests)
target_sources(BinaryTreeBehaviourTests PRIVATE BinaryTreeBehaviourTests.cpp)
target_link_libraries(
  BinaryTreeBehaviourTests PRIVATE LeetCode::BinaryTree gtest
)

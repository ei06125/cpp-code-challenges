#ifndef BINARY_TREE_HPP
#define BINARY_TREE_HPP

struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode()
    : val(0)
    , left(nullptr)
    , right(nullptr) {}
  TreeNode(int x)
    : val(x)
    , left(nullptr)
    , right(nullptr) {}
  TreeNode(int x, TreeNode* left, TreeNode* right)
    : val(x)
    , left(left)
    , right(right) {}
};

#endif // BINARY_TREE_HPP

#include "BinaryTree.hpp"

#include <gtest/gtest.h>

#include <string>
#include <vector>
using std::vector;

/// ===========================================================================
namespace Helpers {
  TreeNode* ParseInput(const std::string& input) { return nullptr; }
} // namespace Helpers
/// ===========================================================================

TEST(ParseInputTestSuite, ParseNoInput) {
  TreeNode* node = Helpers::ParseInput("");
  EXPECT_EQ(node, nullptr);
}

/// ===========================================================================
int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

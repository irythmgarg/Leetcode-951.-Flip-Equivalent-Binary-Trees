/**
 * Definition for a binary tree node.
 */
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
        // Base Case: Both nodes are null
        if (!root1 && !root2)
            return true;

        // Base Case: One is null and the other is not
        if ((root1 && !root2) || (!root1 && root2))
            return false;

        // If current node values are not equal
        if (root1->val != root2->val)
            return false;

        // Check both possible flip cases:
        // 1. No flip: left-left and right-right
        // 2. Flip: left-right and right-left
        bool sameStructure = flipEquiv(root1->left, root2->left) &&
                             flipEquiv(root1->right, root2->right);

        bool flippedStructure = flipEquiv(root1->left, root2->right) &&
                                flipEquiv(root1->right, root2->left);

        return sameStructure || flippedStructure;
    }
};

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
     TreeNode* helperBuild(vector<int>& preorder, int& preIndex,
                          vector<int>& inorder, int inStart, int inEnd) {
        if (inStart > inEnd) return nullptr;

        // Create root from preorder
        TreeNode* root = new TreeNode(preorder[preIndex++]);

        // Find this root in inorder
        int inIndex = inStart;
        while (inorder[inIndex] != root->val) {
            inIndex++;
        }

        // Build left and right subtrees
        root->left = helperBuild(preorder, preIndex, inorder, inStart, inIndex - 1);
        root->right = helperBuild(preorder, preIndex, inorder, inIndex + 1, inEnd);

        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preIndex = 0;
        return helperBuild(preorder, preIndex, inorder, 0, inorder.size() - 1);
    }
};

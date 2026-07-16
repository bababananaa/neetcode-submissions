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
    TreeNode* postorder(TreeNode* n) {
       if (n == nullptr) return nullptr;
       postorder(n->left);
       postorder(n->right);
       swap(n->left,n->right);
       return n;
    }
    TreeNode* invertTree(TreeNode* root) {
       return postorder(root);

    }
};

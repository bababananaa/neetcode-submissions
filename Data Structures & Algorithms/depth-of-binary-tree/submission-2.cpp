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
    //dfs implemented recurisivbly  bruh you dotn evben need this
    vector<int> inorder(TreeNode* n){
        vector<int> res;
        if (n==nullptr) return res;
        vector<int> L=(inorder(n->left));
        res.insert(res.end(), L.begin(), L.end());

        res.push_back(n->val);

        vector<int> R=(inorder(n->right));
        res.insert(res.end(), R.begin(), R.end());

        return res;
    }

    int maxDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0; // An empty tree has a depth of 0
        }
        // Recursively calculate the depth of the left and right subtrees
        int leftDepth = maxDepth(root->left);
        int rightDepth = maxDepth(root->right);

        // The maximum depth of the current node is 1 (for the current node)
        // plus the maximum of the left and right subtree depths.
        return 1 + std::max(leftDepth, rightDepth);
    }
};

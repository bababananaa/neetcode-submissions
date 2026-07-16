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
    bool isSameTree(TreeNode* p, TreeNode* q) {
    if (!p && !q) return true;        // both null → same
    if (!p || !q) return false;       // one null → different
    if (p->val != q->val) return false; // values differ
    // recursively check left and right
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}
};

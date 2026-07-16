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
    int branchSize(TreeNode* n){;
        //nothing
        if(n==nullptr) return 0;
        //recurisve to leaf
       int l=branchSize(n->left);
       int r=branchSize(n->right);
       return (1+max(l,r));
        
    }
    bool isBalanced(TreeNode* root) {
        if (root==nullptr) return true;
        int l=branchSize(root->left);
        int r=branchSize(root->right);
        //if branches are the same OR
        //LEFT ONLY DIFFER by1 
        if ((l == r || (l - r) == 1 || (r - l) == 1) 
        && isBalanced(root->left) 
        && isBalanced(root->right)) {
        return true;
    }
        return false;
    }
};

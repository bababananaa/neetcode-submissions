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
    void postorder(TreeNode* n,vector<int>& r){

        if (n==nullptr) return;
        postorder(n->left,r);
        r.push_back(n->val);
        postorder(n->right,r);
        
    }
    int kthSmallest(TreeNode* root, int k) {
        //traverse the tree inorderly and keep track of the max
        //put the preorder into an vector and iterate it through it size-1 times
        vector<int> result= {};
        postorder(root,result);
        return result[k-1];
       

    }
};

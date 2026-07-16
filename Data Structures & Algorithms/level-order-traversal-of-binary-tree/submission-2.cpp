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
    void lo(TreeNode* root, int level, vector<vector<int>> &r){
        if(root==nullptr) return;
        if (r.size()<=level){
            r.push_back({});
        }
        r[level].push_back(root->val);
        lo(root->left, level+1, r);
        lo(root->right, level+1, r);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        //if(root==nullptr) return result;
        lo(root,0,result);
        return result;
    }
};

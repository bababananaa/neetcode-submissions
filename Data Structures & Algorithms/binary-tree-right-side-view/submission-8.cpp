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

    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        if(root==nullptr)return result;
        int v= root->val;
        result.push_back(v);
        vector<int> r=rightSideView(root->right);
        vector<int> l=rightSideView(root->left);
        result.insert(result.end(), r.begin(), r.end());
        
        //left nonright
        for (int i = r.size(); i < l.size(); ++i) {
            result.push_back(l[i]);
        }

        return result;
    }
};

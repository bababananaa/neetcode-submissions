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
    int maxDepth(TreeNode* root) {
        if (root==nullptr) {return  0;}
         stack<pair<TreeNode* ,int>> stack;
         stack .push({root, 0});
         int mxdepth=0;

         while (!stack.empty()){
                TreeNode* n=stack.top().first;
                int depth=stack.top().second;
                stack.pop();
        
                mxdepth=max(mxdepth,depth);
                if (n->left != nullptr)  { stack.push({n->left, depth + 1}); }
                if (n->right != nullptr) { stack.push({n->right, depth + 1}); }
            

         }
         return mxdepth + 1;
    }
};

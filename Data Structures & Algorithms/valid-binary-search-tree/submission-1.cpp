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
    //iterate from bottom, return bool
    //check each sub tree returning false if tits invalid
    bool isValidBST(TreeNode* root) {
    //left subtree contains noddes with keys less than node key
    //right subtree contains only nodes with keys greader than nodes key
    //base case [10,9,11,8,10]
      return isValid(root,INT_MIN,INT_MAX);


    }
    bool isValid(TreeNode* root, int min, int max){
        if (root==nullptr) return true;
          //if left exists, compare it to root.
        if(root->val<=min||root->val>=max){
            return false;
        }
        //recursively 
        return (isValid(root->left,min,root->val))
            &&(isValid(root->right,root->val,max));


    }
};

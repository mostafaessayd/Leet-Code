/**
 * created by : cidi mohamed mostepha
 * link :https://leetcode.com/problems/path-sum
 * Difficulty : easy
 */

class Solution {
public:
    bool hasPathSum(TreeNode* root, int c) {
        if(root == NULL)
         return false;
        
        if(!root->left && !root->right)
        {
            if(c == root->val)
             return true;
             return false;
        }

        return hasPathSum(root->left , c - root->val) || hasPathSum(root->right , c - root->val);
    }
};
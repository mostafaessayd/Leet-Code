/**
 * created by : cidi mohamed mostepha
 * link :https://leetcode.com/problems/binary-tree-preorder-traversal
 * Difficulty : easy
 */

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        if(root == NULL)
            return {};
        vector<int> r = preorderTraversal(root->right);
        vector<int> l = preorderTraversal(root->left);
        vector<int> ans;
        ans.push_back(root->val);
          for(int data : l)
            ans.push_back(data);
        for(int data : r)
            ans.push_back(data);
        return ans;
    }
};
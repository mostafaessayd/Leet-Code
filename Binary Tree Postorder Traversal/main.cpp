/**
 * created by : cidi mohamed mostepha
 * link :https://leetcode.com/problems/binary-tree-postorder-traversal
 * Difficulty : easy
 */

class Solution
{
public:
    vector<int> postorderTraversal(TreeNode *root)
    {
        if (root == NULL)
            return {};
        vector<int> r = postorderTraversal(root->right);
        vector<int> l = postorderTraversal(root->left);
        vector<int> ans;

        for (int data : l)
            ans.push_back(data);

        for (int data : r)
            ans.push_back(data);

        ans.push_back(root->val);

        return ans;
    }
};

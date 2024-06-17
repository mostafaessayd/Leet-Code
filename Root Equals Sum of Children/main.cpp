/**
 * created by : cidi mohamed mostepha
 * link : https://leetcode.com/problems/root-equals-sum-of-children
 * Difficulty : easy
 */

class Solution
{
public:
    int sum(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        if (root->left == NULL && root->right == NULL)
            return root->val;
        return sum(root->right) + sum(root->left);
    }

    bool checkTree(TreeNode *root)
    {
        return (root->val == sum(root));
    }
};
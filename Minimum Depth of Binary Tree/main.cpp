/**
 * created by : cidi mohamed mostepha
 * link :https://leetcode.com/problems/minimum-depth-of-binary-tree
 * Difficulty : easy
 */

class Solution
{
    int ans = 1e9;

public:
    void f(TreeNode *root, int length)
    {
        if (!root)
            return;

        if (!root->left && !root->right)
        {
            ans = min(ans, length);
            return;
        }

        f(root->left, length + 1);
        f(root->right, length + 1);
    }
    int minDepth(TreeNode *root)
    {
        f(root, 1);

        return (ans == 1e9 ? 0 : ans);
    }
};
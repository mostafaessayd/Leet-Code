/**
 * created by : cidi mohamed mostepha
 * link :https://leetcode.com/problems/cousins-in-binary-tree
 * Difficulty : easy
 */

class Solution
{
public:
    vector<int> dp;
    vector<int> per;

    void depth(TreeNode *root, int p, int d)
    {
        if (root)
        {
            depth(root->right, root->val, d + 1);
            depth(root->left, root->val, d + 1);
            dp[root->val] = d;
            per[root->val] = p;
        }
    }

    bool isCousins(TreeNode *root, int x, int y)
    {
        dp.resize(101, 0);
        per.resize(101, 0);

        depth(root, 0, 0);

        return (dp[x] == dp[y] && per[x] != per[y] ? true : false);
    }
};
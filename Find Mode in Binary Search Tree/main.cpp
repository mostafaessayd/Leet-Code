/**
 * created by : cidi mohamed mostepha
 * link : https://leetcode.com/problems/find-mode-in-binary-search-tree
 * Difficulty : easy
 */

class Solution
{
public:
    map<int, int> dp;
    int result = 0;

    void f(TreeNode *root)
    {
        if (!root)
            return;

        dp[root->val]++;
        result = max(result, dp[root->val]);

        f(root->left);
        f(root->right);
    }
    vector<int> findMode(TreeNode *root)
    {
        f(root);
        vector<int> a;
        for (const auto &[x, y] : dp)
            if (y == result)
                a.push_back(x);

        return a;
    }
};
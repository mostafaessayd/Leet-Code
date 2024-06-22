/**
 * created by : cidi mohamed mostepha
 * link :https://leetcode.com/problems/two-sum-iv-input-is-a-bst
 * Difficulty : easy
 */

class Solution
{
public:
    map<int, int> dp;

    void init(TreeNode *root)
    {
        if (root)
        {
            dp[root->val]++;
            init(root->left);
            init(root->right);
        }
    }

    bool findTarget(TreeNode *root, int k)
    {
        init(root);

        for (auto &[x, y] : dp)
        {
            if ((x * 2 == k && dp[x] > 1) || ((k - x) * 2 == k && dp[k - x] > 1))
            {
                return true;
            }

            if (dp[k - x] * dp[x] && x * 2 != k)
            {
                return true;
            }
        }

        return false;
    }
};
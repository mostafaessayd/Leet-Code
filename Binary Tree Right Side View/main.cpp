/**
 * created by : cidi mohamed mostepha
 * link :https://leetcode.com/problems/binary-tree-right-side-view
 * Difficulty : Medium
 */

class Solution
{
public:
    map<int, int> dp;

    void remp(TreeNode *root, int l)
    {
        if (root)
        {
            dp[l] = root->val;
            remp(root->left, l + 1);
            remp(root->right, l + 1);
        }
    }

    vector<int> rightSideView(TreeNode *root)
    {

        remp(root, 0);

        vector<int> ans(dp.size());

        for (int i = 0; i < ans.size(); i++)
        {
            ans[i] = dp[i];
        }

        return ans;
    }
};
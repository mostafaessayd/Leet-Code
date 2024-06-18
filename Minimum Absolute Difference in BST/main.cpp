/**
 * created by : cidi mohamed mostepha
 * link : https://leetcode.com/problems/minimum-absolute-difference-in-bst
 * Difficulty : easy
 */

class Solution
{
public:
    vector<int> values;

    void remp(TreeNode *root)
    {
        if (root)
        {
            remp(root->left);
            values.push_back(root->val);
            remp(root->right);
        }
    }

    int getMinimumDifference(TreeNode *root)
    {
        remp(root);

        int ans = 1e6;
        for (int i = 1; i < values.size(); i++)
            ans = min(ans, abs(values[i] - values[i - 1]));
        return ans;
    }
};
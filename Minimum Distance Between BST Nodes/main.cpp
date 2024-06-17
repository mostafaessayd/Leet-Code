/**
 * created by : cidi mohamed mostepha
 * link :https://leetcode.com/problems/minimum-distance-between-bst-nodes
 * Difficulty : easy
 */

class Solution
{
public:
    vector<int> a;

    void f(TreeNode *root)
    {
        if (!root)
            return;
        f(root->left);
        a.push_back(root->val);
        f(root->right);
    }

    int minDiffInBST(TreeNode *root)
    {
        f(root);
        int ans = INT_MAX;
        for (int i = 0; i < a.size() - 1; i++)
            ans = min(ans, abs(a[i] - a[i + 1]));
        return ans;
    }
};
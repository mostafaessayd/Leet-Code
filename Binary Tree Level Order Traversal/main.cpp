/**
 * created by : cidi mohamed mostepha
 * link :https://leetcode.com/problems/binary-tree-level-order-traversal
 * Difficulty : Medium
 */

class Solution
{
public:
    vector<vector<int>> ans;

    int cur = 0;
    void m(TreeNode *root, int d)
    {
        if (!root)
            return;

        m(root->left, d + 1);
        m(root->right, d + 1);

        cur = max(cur, d);
    }

    void f(TreeNode *root, int d)
    {
        if (!root)
            return;

        ans[d].push_back(root->val);
        f(root->left, d + 1);
        f(root->right, d + 1);
    }

    vector<vector<int>> levelOrder(TreeNode *root)
    {
        m(root, 0);

        if (!root)
        {
            ans.clear();
            return ans;
        }

        ans.resize(cur + 1);
        f(root, 0);
        return ans;
    }
};
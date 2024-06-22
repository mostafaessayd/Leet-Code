/**
 * created by : cidi mohamed mostepha
 * link : https://leetcode.com/problems/binary-tree-tilt
 * Difficulty : easy
 */

class Solution
{
public:
    int ans = 0;

    int dfs(TreeNode *root)
    {
        if (root == NULL)
            return 0;

        int L = dfs(root->left);
        int R = dfs(root->right);

        ans += abs(L - R);

        return L + R + root->val;
    }

    int findTilt(TreeNode *root)
    {
        dfs(root);
        return ans;
    }
};
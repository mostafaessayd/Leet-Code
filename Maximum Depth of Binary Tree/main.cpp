/**
 * created by : cidi mohamed mostepha
 * link :https://leetcode.com/problems/maximum-depth-of-binary-tree
 * Difficulty : easy
 */

class Solution
{
public:
    int maxDepth(TreeNode *root)
    {
        if (!root)
            return 0;
        int maxLeft = maxDepth(root->left);
        int maxRight = maxDepth(root->right);
        return max(maxLeft, maxRight) + 1;
    }
};
/**
 * created by : cidi mohamed mostepha
 * link :https://leetcode.com/problems/diameter-of-binary-tree
 * Difficulty : easy
 */

class Solution
{
public:
    int ans = 0;

    int depth(TreeNode *root)
    {

        if (root == NULL)
            return 0;

        int leftSide = depth(root->left);
        int rightSide = depth(root->right);

        ans = max(ans, leftSide + rightSide);

        return max(leftSide, rightSide) + 1;
    }

    int diameterOfBinaryTree(TreeNode *root)
    {
        depth(root);
        return ans;
    }
};
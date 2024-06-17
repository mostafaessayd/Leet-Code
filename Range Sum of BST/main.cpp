/**
 * created by : cidi mohamed mostepha
 * link : https://leetcode.com/problems/range-sum-of-bst
 * Difficulty : easy
 */

class Solution
{
public:
    int rangeSumBST(TreeNode *root, int low, int high)
    {
        if (root == NULL)
            return 0;

        int a = rangeSumBST(root->left, low, high);
        int b = rangeSumBST(root->right, low, high);

        return (root->val <= high && root->val >= low ? root->val : 0) + a + b;
    }
};
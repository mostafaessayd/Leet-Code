/**
 * created by : cidi mohamed mostepha
 * link :https://leetcode.com/problems/sum-root-to-leaf-numbers
 * Difficulty : Medium
 */

class Solution
{
public:
    int answer(TreeNode *root, int sum)
    {

        if (root == NULL)
            return 0;

        int nextSum = sum * 10 + root->val;

        if (!root->left && !root->right)
            return nextSum;

        return answer(root->right, nextSum) + answer(root->left, nextSum);
    }

    int sumNumbers(TreeNode *root)
    {
        return answer(root, 0);
    }
};
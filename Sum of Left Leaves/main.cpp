/**
 * created by : cidi mohamed mostepha
 * link : https://leetcode.com/problems/sum-of-left-leaves
 * Difficulty : easy
 */

class Solution
{
public:
    int a;

    int sumOfLeftLeaves(TreeNode *root)
    {
        if (root == NULL)
            return 0;

        if (root->left == NULL && root->right == NULL)
        {
            if (a == 1)
                return root->val;
            else
                return 0;
        }

        a = 1;
        int L = sumOfLeftLeaves(root->left);
        a = 0;
        int R = sumOfLeftLeaves(root->right);

        return L + R;
    }
};
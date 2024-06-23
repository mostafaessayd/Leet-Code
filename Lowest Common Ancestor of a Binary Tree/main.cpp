/**
 * created by : cidi mohamed mostepha
 * link :https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree
 * Difficulty : Medium
 */

class Solution
{
public:
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        if (root == NULL || root == p || root == q)
        {
            return root;
        }

        TreeNode *L = lowestCommonAncestor(root->left, p, q);
        TreeNode *R = lowestCommonAncestor(root->right, p, q);

        if (L == NULL)
        {
            return R;
        }

        if (R == NULL)
        {
            return L;
        }

        return root;
    }
};
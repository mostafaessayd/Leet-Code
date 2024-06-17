/**
 * created by : cidi mohamed mostepha
 * link :https://leetcode.com/problems/invert-binary-tree
 * Difficulty : easy
 */

class Solution
{
public:
    TreeNode *invertTree(TreeNode *root)
    {

        if (root == NULL)
            return NULL;

        TreeNode *L = invertTree(root->left);
        TreeNode *R = invertTree(root->right);

        root->left = R;
        root->right = L;

        return root;
    }
};

/**
 * created by : cidi mohamed mostepha
 * link :https://leetcode.com/problems/univalued-binary-tree
 * Difficulty : easy
 */

class Solution
{
public:
    bool isUnivalTree(TreeNode *root)
    {

        if (root == NULL)
            return true;

        if (root->left)
        {
            if (root->left->val != root->val)
            {
                return false;
            }
        }

        if (root->right)
        {
            if (root->right->val != root->val)
            {
                return false;
            }
        }

        return isUnivalTree(root->right) && isUnivalTree(root->left);
    }
};
/**
 * created by : cidi mohamed mostepha
 * link :https://leetcode.com/problems/count-complete-tree-nodes
 * Difficulty : easy
 */

class Solution
{
public:
    int countNodes(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};
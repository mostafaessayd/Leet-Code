/**
 * created by : cidi mohamed mostepha
 * link : https://leetcode.com/problems/evaluate-boolean-binary-tree
 * Difficulty : easy
 */

class Solution
{
public:
    bool evaluateTree(TreeNode *root)
    {
        if (!root->left && !root->right)
            return root->val;

        bool L = evaluateTree(root->left);
        bool R = evaluateTree(root->right);

        return (root->val == 2 ? L | R : L & R);
    }
};
/**
 * created by : cidi mohamed mostepha
 * link :https://leetcode.com/problems/same-tree
 * Difficulty : easy
 */

class Solution
{
public:
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        if (!p && !q)
            return true;
        if (!p || !q || p->val != q->val)
            return false;

        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};
/**
 * created by : cidi mohamed mostepha
 * link : https://leetcode.com/problems/symmetric-tree
 * Difficulty : easy
 */

class Solution
{
public:
    vector<int> a;
    vector<int> b;

    void rempA(TreeNode *root)
    {
        if (root)
        {
            a.push_back(root->val);
            rempA(root->left);
            rempA(root->right);
        }
        else
        {
            a.push_back(-1);
        }
    }

    void rempB(TreeNode *root)
    {
        if (root)
        {
            b.push_back(root->val);
            rempB(root->right);
            rempB(root->left);
        }
        else
        {
            b.push_back(-1);
        }
    }

    bool isSymmetric(TreeNode *root)
    {

        rempA(root->left);
        rempB(root->right);

        if (a.size() != b.size())
        {
            return false;
        }

        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] != b[i])
            {
                return false;
            }
        }

        return true;
    }
};
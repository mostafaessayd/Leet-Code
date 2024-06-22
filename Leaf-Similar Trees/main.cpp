/**
 * created by : cidi mohamed mostepha
 * link :https://leetcode.com/problems/leaf-similar-trees
 * Difficulty : easy
 */

class Solution
{
public:
    void remp(TreeNode *root, vector<int> &vec)
    {
        if (root == NULL)
        {
            return;
        }

        if (!root->left && !root->right)
        {
            vec.push_back(root->val);
        }

        remp(root->left, vec);
        remp(root->right, vec);
    }

    bool leafSimilar(TreeNode *root1, TreeNode *root2)
    {
        vector<int> a, b;

        remp(root1, a);
        remp(root2, b);

        if (a.size() != b.size())
        {
            return false;
        }
        else
        {
            for (int i = 0; i < a.size(); i++)
            {
                if (a[i] != b[i])
                {
                    return false;
                }
            }

            return true;
        }
    }
};
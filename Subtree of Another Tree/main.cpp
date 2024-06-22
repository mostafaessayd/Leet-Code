/**
 * created by : cidi mohamed mostepha
 * link :https://leetcode.com/problems/subtree-of-another-tree
 * Difficulty : easy
 */

class Solution
{
public:
    void remp(TreeNode *root, vector<int> &vec)
    {
        if (root)
        {
            vec.push_back(root->val);
            remp(root->left, vec);
            remp(root->right, vec);
        }
        else
        {
            vec.push_back(-1);
        }
    }

    vector<TreeNode *> possibleRoots;

    void init(TreeNode *root, int target)
    {
        if (root)
        {
            if (root->val == target)
            {
                possibleRoots.push_back(root);
            }

            init(root->left, target);
            init(root->right, target);
        }
    }

    bool isSubtree(TreeNode *root, TreeNode *subRoot)
    {

        init(root, subRoot->val);

        for (TreeNode *ind : possibleRoots)
        {
            vector<int> res1;
            vector<int> res2;

            remp(ind, res1);
            remp(subRoot, res2);

            if (res1.size() != res2.size())
                continue;

            bool okey = true;
            for (int i = 0; i < res1.size(); i++)
            {
                okey &= (res1[i] == res2[i]);
            }

            if (okey)
            {
                return true;
            }
        }

        return false;
    }
};
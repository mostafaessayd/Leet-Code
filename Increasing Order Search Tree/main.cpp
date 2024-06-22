/**
 * created by : cidi mohamed mostepha
 * link :https://leetcode.com/problems/increasing-order-search-tree
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
    }

    TreeNode *answer(vector<int> &vec)
    {
        if (vec.size() == 0)
            return NULL;

        TreeNode *newCase = new TreeNode();
        newCase->val = vec[0];
        newCase->left = NULL;

        vec.erase(vec.begin());

        newCase->right = answer(vec);

        return newCase;
    }

    TreeNode *increasingBST(TreeNode *root)
    {

        vector<int> values;
        remp(root, values);

        sort(values.begin(), values.end());

        return answer(values);
    }
};
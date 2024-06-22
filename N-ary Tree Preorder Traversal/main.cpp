/**
 * created by : cidi mohamed mostepha
 * link :https://leetcode.com/problems/n-ary-tree-preorder-traversal
 * Difficulty : easy
 */

class Solution
{
public:
    vector<int> preorder(Node *root)
    {
        if (root == NULL)
        {
            return {};
        }

        vector<int> res;
        res.push_back(root->val);

        for (Node *chd : root->children)
        {
            vector<int> a = preorder(chd);
            for (int ind : a)
            {
                res.push_back(ind);
            }
        }

        return res;
    }
};
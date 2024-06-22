/**
 * created by : cidi mohamed mostepha
 * link :https://leetcode.com/problems/n-ary-tree-postorder-traversal
 * Difficulty : easy
 */

class Solution
{
public:
    vector<int> postorder(Node *root)
    {
        if (root == NULL)
        {
            return {};
        }

        vector<int> res;

        for (Node *chd : root->children)
        {
            vector<int> a = postorder(chd);
            for (int ind : a)
            {
                res.push_back(ind);
            }
        }

        res.push_back(root->val);

        return res;
    }
};
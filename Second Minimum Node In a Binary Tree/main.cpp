/**
 * created by : cidi mohamed mostepha
 * link : https://leetcode.com/problems/second-minimum-node-in-a-binary-tree
 * Difficulty : easy
 */

class Solution
{
public:
    vector<int> nd;

    void f(TreeNode *root)
    {
        if (root)
        {
            nd.push_back(root->val);
            f(root->left);
            f(root->right);
        }
    }

    int findSecondMinimumValue(TreeNode *root)
    {
        f(root);
        sort(nd.begin(), nd.end());
        if (nd[0] == nd.back())
            return -1;
        int i = 0;
        while (nd[i] == nd[0])
            i++;

        return nd[i];
    }
};
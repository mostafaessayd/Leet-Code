/**
 * created by : cidi mohamed mostepha
 * link :https://leetcode.com/problems/kth-smallest-element-in-a-bst
 * Difficulty : Medium
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

    int kthSmallest(TreeNode *root, int k)
    {
        f(root);
        sort(nd.begin(), nd.end());
        return nd[k - 1];
    }
};

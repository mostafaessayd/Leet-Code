/**
 * created by : cidi mohamed mostepha
 * link :https://leetcode.com/problems/maximum-depth-of-n-ary-tree
 * Difficulty : easy
 */

class Solution
{
public:
    int maxDepth(Node *root)
    {
        if (root == NULL)
            return 0;

        if (root->children.size() == 0)
            return 1;

        int ans = 0;
        for (Node *chd : root->children)
        {
            int L = maxDepth(chd) + 1;
            ans = max(ans, L);
        }

        return ans;
    }
};
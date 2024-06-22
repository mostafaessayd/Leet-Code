/**
 * created by : cidi mohamed mostepha
 * link :https://leetcode.com/problems/sum-of-root-to-leaf-binary-numbers
 * Difficulty : easy
 */

class Solution
{
public:
    int valueOfBinary(string binaryNumber)
    {
        int res = 0;
        int cnt = 0;

        while (binaryNumber.size())
        {
            if (binaryNumber.back() == '1')
            {
                res += pow(2, cnt);
            }

            cnt++;
            binaryNumber.pop_back();
        }

        return res;
    }

    int sum(TreeNode *root, string res)
    {
        if (root == NULL)
            return 0;
        if (!root->right && !root->left)
            return valueOfBinary(res + to_string(root->val));

        int R = sum(root->right, res + to_string(root->val));
        int L = sum(root->left, res + to_string(root->val));

        return R + L;
    }

    int sumRootToLeaf(TreeNode *root)
    {
        return sum(root, "");
    }
};
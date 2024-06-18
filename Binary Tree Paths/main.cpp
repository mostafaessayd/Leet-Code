/**
 * created by : cidi mohamed mostepha
 * link : https://leetcode.com/problems/binary-tree-paths
 * Difficulty : easy
 */

class Solution
{
public:
    vector<string> ans;

    void remp(TreeNode *root, string str)
    {
        if (root)
        {
            if (!root->left && !root->right)
            {

                string newStr = to_string(root->val);
                str += newStr;

                ans.push_back(str);
            }
            else
            {

                string newStr = str;
                newStr += to_string(root->val);
                newStr += "->";

                remp(root->left, newStr);
                remp(root->right, newStr);
            }
        }
    }

    vector<string> binaryTreePaths(TreeNode *root)
    {
        remp(root, "");
        return ans;
    }
};
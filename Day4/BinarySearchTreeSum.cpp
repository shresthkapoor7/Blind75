// My solution
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    int answer = 0;
    void DFS(TreeNode *root, int low, int high)
    {
        if (root == nullptr)
            return;
        if (root->val >= low and root->val <= high)
        {
            answer += root->val;
        }
        if (root->left)
            DFS(root->left, low, high);
        if (root->right)
            DFS(root->right, low, high);
    }
    int rangeSumBST(TreeNode *root, int low, int high)
    {
        if (!root)
            return answer;
        DFS(root, low, high);
        return answer;
    }
};
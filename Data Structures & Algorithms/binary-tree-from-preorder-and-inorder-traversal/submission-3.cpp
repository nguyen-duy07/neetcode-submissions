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

class Solution {
    int preIn = 0;
    int inId = 0;
    TreeNode* dfs(vector<int>& preorder, vector<int>& inorder, int limit){
        if (preIn >= preorder.size()) return NULL;
        if (inorder[inId] == limit){
            inId++;
            return NULL;
        }
        TreeNode* root = new TreeNode(preorder[preIn++]);
        root->left = dfs(preorder, inorder, root->val);
        root->right = dfs(preorder, inorder, limit);
        return root;
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return dfs(preorder, inorder, INT_MAX);
    }
};

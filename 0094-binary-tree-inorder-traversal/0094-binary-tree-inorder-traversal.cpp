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
public:
    void inorder(TreeNode* root, vector<int> &vct){
        if(root == NULL){
            return;
        }

        inorder(root->left,vct);
        vct.push_back(root->val);
        inorder(root->right,vct);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> vct;
        inorder(root,vct);
        return vct;
    }
};
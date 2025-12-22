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
    void postorder(TreeNode* root,vector<int>&A){
        if(root==NULL){
            return;
        }
        postorder(root->left,A);
        postorder(root->right,A);
        A.push_back(root->val);
        return;
    }
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>A;
        postorder(root,A);
        return A;
    }
};
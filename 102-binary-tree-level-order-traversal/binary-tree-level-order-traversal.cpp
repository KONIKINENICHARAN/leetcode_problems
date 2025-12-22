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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL){
            return {};
        }
        queue<TreeNode*>A;
        A.push(root);
        vector<vector<int>>C;
        while(!A.empty()){
            int len=A.size();
            vector<int>B;
            for(int i=0;i<len;i++){
                TreeNode* Q=A.front();
                A.pop();
                B.push_back(Q->val);
                if(Q->left!=NULL){
                    A.push(Q->left);
                }
                if(Q->right!=NULL){
                    A.push(Q->right);
                }
            }
            C.push_back(B);
        }
        return C;
    }
};
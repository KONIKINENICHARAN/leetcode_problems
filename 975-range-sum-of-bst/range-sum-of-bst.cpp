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
    int rangeSumBST(TreeNode* root, int low, int high) {
        queue<TreeNode*>A;
        A.push(root);
        int s=0;
        while(!A.empty()){
            int l=A.size();
            vector<int>B;
            for(int i=0;i<l;i++){
               TreeNode* k=A.front();
                A.pop();
                if(k->val>=low&&k->val<=high){
                s+=k->val;
                }
                if(k->left!=NULL){
                    A.push(k->left);
                }
                if(k->right!=NULL){
                    A.push(k->right);
                }
            }
        }
        return s;
    }
};
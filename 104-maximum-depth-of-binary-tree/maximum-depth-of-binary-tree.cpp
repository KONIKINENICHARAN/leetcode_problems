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
    int maxDepth(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int cnt=0;
        queue<TreeNode*>A;
        A.push(root);
        while(!A.empty()){
            cnt++;
            int l=A.size();
            for(int i=0;i<l;i++){
                TreeNode* k=A.front();
                A.pop();
                if(k->left!=NULL){
                    A.push(k->left);
                }
                if(k->right!=NULL){
                    A.push(k->right);
                }
            }
        }
        return cnt;
    }
};
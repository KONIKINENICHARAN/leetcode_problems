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
    int maxLevelSum(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int s1=INT_MIN,cnt=0,kp=0;
        queue<TreeNode*>A;
        A.push(root);
        while(!A.empty()){
            cnt++;
            int s=0;
            int a=A.size();
            for(int i=0;i<a;i++){
                TreeNode* k=A.front();
                A.pop();
                s+=k->val;
                if(k->left!=NULL){
                    A.push(k->left);
                }
                if(k->right!=NULL){
                    A.push(k->right);
                }                
            }
            cout<<s<<" ";
            if(s>s1){
                s1=s;
                kp=cnt;
            }
        }
        return kp;
    }
};
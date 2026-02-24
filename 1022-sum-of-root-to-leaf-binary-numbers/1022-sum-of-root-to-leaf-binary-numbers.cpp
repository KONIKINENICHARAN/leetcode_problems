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
int sum=0;
   void dfs(TreeNode* k, vector<int>& A){
         if(k == NULL) return;
        A.push_back(k->val);
        if(k->left==NULL&&k->right == NULL){
            int s=0,l=0;
            for(int i=A.size()-1; i>=0; i--){
                s+=A[i]*pow(2,l);
                l++;
            }
            sum+=s;
        }
        else{
            dfs(k->left, A);
            dfs(k->right, A);
        }
        A.pop_back(); 
   }
    int sumRootToLeaf(TreeNode* root) {
        TreeNode* k=root;
        vector<int>A;
        dfs(k,A);
        return sum;
    }
};
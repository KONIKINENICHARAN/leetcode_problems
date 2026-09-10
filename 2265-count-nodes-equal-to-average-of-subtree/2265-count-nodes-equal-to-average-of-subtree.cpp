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
int ans=0;
pair<int,int> postorder(TreeNode* root){
    if(root==NULL){
        return {0,0};
    }
    auto left=postorder(root->left);
    auto right=postorder(root->right);
    int s=left.first+right.first+root->val;
    int cnt=left.second+right.second+1;
    if(s/cnt==root->val){
        ans++;
    }
    return {s,cnt};
}
    int averageOfSubtree(TreeNode* root) {
       postorder(root);
        return ans;
    }
};
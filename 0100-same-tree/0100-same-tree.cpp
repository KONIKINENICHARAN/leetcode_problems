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
    vector<int> bfs(TreeNode* p){
        if(p==NULL){
            return {};
        }
        queue<TreeNode*>Q;
        vector<int>C;
        Q.push(p);
        while(!Q.empty()){
            int op=Q.size();
            while(op--){
                if(Q.front()==NULL){
                    C.push_back(100000);
                    Q.pop();
                    continue;
                }
                TreeNode* kl=Q.front();
                C.push_back(Q.front()->val);
                Q.pop();
                if(kl->left!=NULL){
                    Q.push(kl->left);
                }
                else{
                    Q.push(NULL);
                }
                if(kl->right!=NULL){
                    Q.push(kl->right);
                }
                else{
                    Q.push(NULL);
                }
            }
        }
        return C;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int>A;
        vector<int>B;
        A=bfs(p);
        B=bfs(q);
        return A==B;
    }
};
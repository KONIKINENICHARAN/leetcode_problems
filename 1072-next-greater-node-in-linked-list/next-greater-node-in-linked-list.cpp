/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* temp=head;
        vector<int>A;
        vector<int>C;
        vector<int>D;
        while(temp){
            A.push_back(temp->val);
            C.push_back(temp->val);
            temp=temp->next;
        }
        sort(A.begin(),A.end());
        stack<int>B;
        for(int i=0;i<A.size();i++){
            B.push(A[i]);
        }
        int i=0;
        while(i<C.size()){
            if(C[i]==B.top()){
                D.push_back(0);
                B.pop();
                i++;
                continue;
            }
            if(i==C.size()-1){
                D.push_back(0);
                i++;
                continue;
            }
            int j=i+1;
            while(j<C.size()&&C[i]>=C[j]){
                j++;
            }
            if(j==C.size()){
                D.push_back(0);
                i++;
                continue;
            }
            D.push_back(C[j]);
            i++;
        }
        return D;
    }
};
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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int cnt=1;
        ListNode* temp=head;
        int prev=temp->val;
        vector<int>A;
        while(temp->next!=NULL){
            int op=temp->next->val;
            int kl=temp->val;
            if((kl>prev&&kl>op)||kl<prev&&kl<op){
                A.push_back(cnt);
            }
            cnt++;
            prev=temp->val;
            temp=temp->next;
        }
        if(A.size()<=1){
            return {-1,-1};
        }
        int io=A[A.size()-1]-A[0];
        int y=INT_MAX;
        for(int i=0;i<A.size()-1;i++){
            y=min(y,A[i+1]-A[i]);
        }
        return {y,io};
    }
};
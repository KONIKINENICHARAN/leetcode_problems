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
    int pairSum(ListNode* head) {
        ListNode* fast=head;
        int cnt=0;
        while(fast!=NULL&&fast->next!=NULL){
            cnt+=2;
            fast=fast->next->next;
        }
        ListNode* temp=head;
        int l=0;
        cnt=cnt/2;
        int y=cnt-1;
        vector<int>A(cnt);
        while(temp!=NULL){
            if(l<=y){
                A[l]=temp->val;
            }
            else{
                A[y]+=temp->val;
                y--;
            }
             l++;
            temp=temp->next;
        }
        return *max_element(A.begin(),A.end());
    }
};
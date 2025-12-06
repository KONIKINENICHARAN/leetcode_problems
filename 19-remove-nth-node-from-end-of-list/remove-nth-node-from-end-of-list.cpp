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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt=0;
        ListNode *fast=head;
        while(fast!=NULL&&fast->next!=NULL){
            cnt+=2;
            fast=fast->next->next;
        }
        if(fast!=NULL){
            cnt++;
        }
        if(cnt==1){
            head=NULL;
            return head;
        }
        int x=cnt-n;
        if(x==0){
            head=head->next;
            return head;
        }
        int y=1;
        ListNode* temp=head;
        while(y<x){
            temp=temp->next;
            y++;
        }
        if(temp->next->next==NULL){
            temp->next=NULL;
        }
        else{
            temp->next=temp->next->next;
        }
        return head;
    }
};
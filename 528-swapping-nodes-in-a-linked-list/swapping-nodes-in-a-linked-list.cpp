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
    ListNode* swapNodes(ListNode* head, int k) {
        if(head==NULL||head->next==NULL){
            return head;
        }
        int cnt=1;
        ListNode* temp=head;
        while(temp!=NULL&&cnt<k){
            cnt++;
            temp=temp->next;
        }
        ListNode *fast=head;
        int o=0;
        while(fast&&fast->next){
            o+=2;
            fast=fast->next->next;
        }
        if(fast!=NULL){
            o++;
        }
        o=o-k;
        ListNode *temp1=head;
        while(o>0){
            temp1=temp1->next;
            o--;
        }
        swap(temp->val,temp1->val);
        return head;
    }
};
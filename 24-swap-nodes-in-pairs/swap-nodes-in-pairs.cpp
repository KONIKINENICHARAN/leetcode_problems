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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL||head->next==NULL){
            return head;
        }
        ListNode *temp=head;
        ListNode *real=NULL;
        ListNode *temp1=head,*prev=NULL;
        while(temp1!=NULL&&temp1->next!=NULL){
            ListNode *imag=temp->next;
            ListNode *imag1=imag->next;
             imag->next=temp;
             temp->next=imag1;
             if(real==NULL){
                real=imag;
             }
              if(prev != NULL){
                prev->next = imag;
            }
            prev=temp;
             temp1=imag1;
             temp=imag1;
        }
        return real;
    }
};
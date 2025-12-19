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
    ListNode* removeNodes(ListNode* head) {
        if(head==NULL||head->next==NULL){
            return head;
        }
        ListNode *current=head,*next=NULL,*prev=NULL;
        while(current){
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }
        ListNode *er=prev,*imag=NULL,*real=NULL;
        if(real==NULL){
            real=er;
            imag=er;
        }
        er=er->next;
        while(er){
          if(er->val>=imag->val){
            imag->next=er;
            imag=er;
          }
          er=er->next;
        }
        imag->next=NULL;
         ListNode *curr=real,*nex=NULL,*pre=NULL;
        while(curr){
            nex=curr->next;
            curr->next=pre;
            pre=curr;
            curr=nex;
        }
        return pre;
    }
};
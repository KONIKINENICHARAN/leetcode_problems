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
    ListNode* doubleIt(ListNode* head) {
        ListNode* prev=NULL;
        ListNode* current=head;
        ListNode* next=NULL;
        while(current!=NULL){
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }
        int carry=0;
        ListNode* temp=prev;
        ListNode* imag=NULL,*real=NULL;
        while(temp){
            int a=temp->val+temp->val+carry;
            ListNode* k=new ListNode(a%10);
            a=a/10;
            carry=a%10;
            if(imag==NULL){
                imag=k;
                real=k;
            }
            else{
                imag->next=k;
                imag=k;
            }
            temp=temp->next;
        }
        if(carry){
            ListNode *o=new ListNode(carry);
            imag->next=o;
            imag=o;
        }
         ListNode* pre=NULL;
        ListNode* curr=real;
        ListNode* nex=NULL;
        while(curr!=NULL){
            nex=curr->next;
            curr->next=pre;
            pre=curr;
            curr=nex;
        }
        return pre;
    }
};
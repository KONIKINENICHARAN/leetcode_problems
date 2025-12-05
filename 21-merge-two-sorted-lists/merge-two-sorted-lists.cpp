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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *temp=list1;
        ListNode *tem=list2;
        ListNode *head=NULL,*real=NULL;
        while(temp!=NULL&&tem!=NULL){
            ListNode *l = new ListNode();
            if(temp->val > tem->val){
                l->val=tem->val;
                tem=tem->next;
            }
            else{
                l->val=temp->val;
                temp=temp->next;
            }
            if(head==NULL){
                head=l;
                real=head;
            }
            else{
               head->next=l;
               head=l;
            }
        }
        while(temp!=NULL){
            ListNode *l=new ListNode();
            l->val=temp->val;
            if(head==NULL){
                head=l;
                real=head;
            }
            else{
            head->next=l;
            head=l;
            }
            temp=temp->next;
        }
         while(tem!=NULL){
            ListNode *l=new ListNode();
            l->val=tem->val;
            if(head==NULL){
                head=l;
                real=head;
            }
            else{
            head->next=l;
            head=l;
            }
            tem=tem->next;
        }
        return real;
    }
};
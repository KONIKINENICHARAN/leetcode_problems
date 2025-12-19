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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int cnt=1;
        ListNode* temp=list1;
        ListNode *real=temp,*imag1=list1;
        while(cnt<a){
            temp=temp->next;
            imag1=imag1->next;         
            cnt++;
        }
        ListNode *Yo=temp;
        while(cnt<=b){
            Yo=Yo->next;
            cnt++;
        }
        Yo=Yo->next;
        ListNode* imag=list2;
        temp->next=imag;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        
        temp->next=Yo;
        return real;
    }
};
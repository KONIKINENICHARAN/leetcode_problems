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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* imag=NULL,*real=NULL;
        ListNode* temp=head;
        temp=temp->next;
        int sum=0;
        while(temp!=NULL){
            sum+=temp->val;
            if(temp->val==0){
                ListNode *l=new ListNode(sum);
                if(imag==NULL&&real==NULL){
                    imag=l;
                    real=l;
                }
                else{
                    imag->next=l;
                    imag=l;
                }
                sum=0;
            }
            temp=temp->next;
        }
        return real;
    }
};
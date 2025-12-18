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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL||head->next==NULL){
            return head;
        }
        ListNode* real=NULL,*real1=NULL;
        ListNode* imag=NULL,*temp=head,*imag1=NULL;
        int cnt=1;
        while(temp){
            if(cnt%2!=0){
                if(imag==NULL){
                    real=temp;
                    imag=temp;
                }
                else{
                    imag->next=temp;
                    imag=temp;
                }
            }
            if(cnt%2==0){
                if(imag1==NULL){
                    real1=temp;
                    imag1=temp;
                }
                else{
                    imag1->next=temp;
                    imag1=temp;
                }
            }
            temp=temp->next;
            cnt++;
        }
        imag->next=real1;
        imag1->next=NULL;
        return real;
    }
};
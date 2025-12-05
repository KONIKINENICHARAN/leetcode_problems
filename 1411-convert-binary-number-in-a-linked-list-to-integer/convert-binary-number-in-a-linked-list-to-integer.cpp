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
    int getDecimalValue(ListNode* head) {
        ListNode *temp=head;
        int cnt=-1;
        while(temp!=NULL){
             temp=temp->next;
             cnt++;
        }
        ListNode *tem=head;
        int l=0;
        while(tem!=NULL){
            int k=tem->val;
            l=l+k*pow(2,cnt);
            tem=tem->next;
            cnt--;
        }
        return l;
    }
};
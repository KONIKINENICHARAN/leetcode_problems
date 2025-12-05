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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode *temp=head;
        while(temp->next!=NULL){
            int c=gcd(temp->val,temp->next->val);
            ListNode *tem=new ListNode(c);
            ListNode *A=temp->next;
            temp->next=tem;
            tem->next=A;
            cout<<c<<" ";
            temp=temp->next->next;
        }
        return head;
    }
};
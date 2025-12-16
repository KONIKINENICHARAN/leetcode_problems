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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        int cnt=0;
        ListNode* u=head;
        while(u!=NULL){
            cnt++;
            u=u->next;
            if(cnt>2){
                break;
            }
        }
        unordered_map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        ListNode* temp=head;
        ListNode* next;
        ListNode *prev=head;
        while(freq[temp->val]!=0){
            temp=temp->next;
        }
        head=temp;
        while(temp->next!=NULL){
            next=temp->next;
            while(next->next!=NULL&&freq[next->val]!=0){
                next=next->next;
            }
                temp->next=next;
                prev=temp;
                temp=next;
        }
        if(cnt>2){
        while(prev->next->next!=NULL){
            prev=prev->next;
        }
        if(freq[prev->next->val]!=0){
            prev->next=NULL;
        }
        }
        return head;
    }
};
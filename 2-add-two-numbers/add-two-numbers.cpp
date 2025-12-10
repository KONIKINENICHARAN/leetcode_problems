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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *temp=l1;
        ListNode *temp1=l2;
        string s="";
        while(temp!=NULL){
            s+=to_string(temp->val);
            temp=temp->next;
        }
        reverse(s.begin(),s.end());
        string h="";
        while(temp1!=NULL){
            h+=to_string(temp1->val);
            temp1=temp1->next;
        }
        reverse(h.begin(),h.end());
         ListNode *head=NULL,*real=NULL;
        int i=s.size()-1,j=h.size()-1,c=0;
        while(i>=0||j>=0||c){
            int sum=c;
            if(i>=0){
                sum+=s[i]-'0';
                i--;
            }
            if(j>=0){
                sum+=h[j]-'0';
                j--;
            }
            int y=sum%10;
            sum=sum/10;
            c=sum%10;
            if(head==NULL){
                ListNode *uk=new ListNode(y);
                head=uk;
                real=uk;
            }
            else{
                ListNode *uk=new ListNode(y);
                head->next=uk;
                head=uk;
            }
        }
        return real;
    }
};
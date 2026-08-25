class Solution {
public:
    long long bowlSubarrays(vector<int>& nums) {
        long long cnt=0;
        stack<int>A;
        A.push(nums.size()-1);
        for(int i=nums.size()-2;i>=0;i--){
              if(nums[A.top()]>nums[i]){
                   A.push(i);
              }
              else{
               int op=-1;
               int l=0;
                 while(!A.empty()&&nums[A.top()]<nums[i]){
                      if(op==-1){
                         op=A.top();
                      }
                       A.pop();
                       l++;
                 }
                  if(A.empty()&&op-i==1){
                    l--;
                  }
                  cnt+=l;
                   A.push(i);
                   
              }
        }
        return cnt;
    }
};
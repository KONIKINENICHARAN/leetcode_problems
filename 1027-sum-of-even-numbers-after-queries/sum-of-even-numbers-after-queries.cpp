class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int>A(nums.size()+3);
        int s=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
            s+=nums[i];
            }
        }
         vector<int>C;
        for(int i=0;i<queries.size();i++){
           int k=queries[i][1];
           int op=queries[i][0];
           if(op%2==0&&nums[k]%2==0){
               s+=op;
               nums[k]+=op;
           }
           else if(op%2!=0&&nums[k]%2!=0){
                s+=nums[k]+op;
                nums[k]+=op;
           }
           else if(op%2!=0&&nums[k]%2==0){
              s-=nums[k];
              nums[k]+=op;
           }
           else if(nums[k]%2!=0&&op%2==0){
              nums[k]+=op;
           }
           C.push_back(s);
        }
        return C;
    }
};
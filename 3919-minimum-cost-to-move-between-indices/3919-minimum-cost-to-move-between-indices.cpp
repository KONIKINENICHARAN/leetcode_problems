class Solution {
public:
    vector<int> minCost(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int>pre;
        vector<int>suf;
        int pre_sum=0;
        int suf_sum=0;
        for(int i=0;i<nums.size();i++){
            if(i==0){
                pre_sum++;
                pre.push_back(1);
                suf.push_back(0);
            }
            else if(i==nums.size()-1){
                suf_sum++;
                 pre.push_back(0);
                suf.push_back(1);
            }
            else{
                int op=abs(nums[i]-nums[i+1]);
                int kl=abs(nums[i]-nums[i-1]);
                if(op>=kl){
                    suf_sum++;
                    pre_sum+=op;
                     pre.push_back(op);
                     suf.push_back(1);
                }
                else{
                    pre_sum++;
                    suf_sum+=kl;
                     pre.push_back(1);
                     suf.push_back(kl);
                }
            }
         }
         for(int i=1;i<pre.size();i++){
            pre[i]+=pre[i-1];
         }
         for(int i=nums.size()-2;i>=0;i--){
            suf[i]+=suf[i+1];
         }
        vector<int>ans;
        for(int i=0;i<queries.size();i++){
            if(queries[i][0]==queries[i][1]){
                ans.push_back(0);
            }
             else if(queries[i][0]==0&&queries[i][1]==nums.size()-1){
                ans.push_back(pre_sum);
            }
            else if(queries[i][0]==(nums.size()-1)&&queries[i][1]==0){
                ans.push_back(suf_sum);
            } 
            else if(queries[i][0]<queries[i][1]){
                int zo=queries[i][1]-1;
                int u=0;
                if(queries[i][0]!=0){
                   int io=queries[i][0]-1;
                   u=pre[io];
                }
                int h=pre[zo]-u;
                ans.push_back(h);
            }
            else{
               int l=queries[i][0];
               int r=queries[i][1];
               int u=0;
               if(l!=nums.size()-1){
                  u=suf[l+1];
               }
               r++;
               int h=suf[r]-u;
               ans.push_back(h);
            }
        }
        return ans;
    }
};
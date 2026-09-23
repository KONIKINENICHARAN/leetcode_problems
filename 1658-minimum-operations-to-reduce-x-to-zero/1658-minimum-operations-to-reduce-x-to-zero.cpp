class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        vector<int>pre(nums.size());
        int s=0;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
            pre[i]=s;
        }
        int cnt=0;
        int j=nums.size();
        int s1=0;
        int mini=INT_MAX;
        while(j>=0&&s1<=x){
            if(j<nums.size()){
                s1+=nums[j];
            }
            int op=x-s1;
            if(op==0){
                mini=min(mini,cnt);
                continue;
            }
            auto it=lower_bound(pre.begin(),pre.end()-cnt,op);
            if(it!=pre.end()-cnt&&pre[it-pre.begin()]==op){
                int z=it-pre.begin()+1;
                mini=min(mini,z+cnt);
            }
            cnt++;
            j--;
        }
        if(mini==INT_MAX){
            return -1;
        }
        return mini;
    }
};
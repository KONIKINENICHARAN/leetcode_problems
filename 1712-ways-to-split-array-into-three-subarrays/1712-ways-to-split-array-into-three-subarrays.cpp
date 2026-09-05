class Solution {
public:
    int waysToSplit(vector<int>& nums) {
        const long long mod=1000000007;
        vector<long long>pre(nums.size());
        pre[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            pre[i]=pre[i-1]+nums[i];
        }
        long long cnt=0;
        int i=0;
        while(i<nums.size()-2){
            long long op=pre[i]+pre[i];
            int kl=lower_bound(pre.begin()+i+1,pre.end(),op)-pre.begin();
            if(kl>=nums.size()-1){
               i++;
               continue;
            }
            long long l=pre[kl]-pre[i];
            long long u=pre[pre.size()-1]-pre[kl];
            long long z=u-l;
            if(z<0){
                i++;
                continue;
            }
            long long z1=upper_bound(pre.begin(),pre.end()-1,pre[kl]+z/2)-pre.begin();
            cnt+=(z1-kl)%mod;
            i++;
        }
        return cnt%mod;
    }
};
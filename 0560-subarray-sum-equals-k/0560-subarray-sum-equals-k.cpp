class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int i=0,sum=0,cnt=0;
        map<int,int>freq;
        freq[0]=1;
        while(i<nums.size()){
            sum+=nums[i];
            int op=sum-k;
            if(freq[op]!=0){
                cnt+=freq[op];
            }
            freq[sum]++;
            i++;
        }
        return cnt;
    }
};
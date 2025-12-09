class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        unordered_map<int,long long>freq;
        long long cnt=0,flag=1;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
         unordered_map<int,long long>fre;
         for(int i=0;i<nums.size()-1;i++){
            fre[nums[i]]++;
            if(fre[2*nums[i]]!=0){
                int k=abs(freq[2*nums[i]]-fre[2*nums[i]]);
                if(2*nums[i]==0){
                    if(fre[nums[i]]>1){
                        int k=abs(freq[2*nums[i]]-(fre[2*nums[i]]));
                        cnt=(cnt+(fre[2*nums[i]]-1)*k)%1000000007;
                    }
                }
                else{
                cnt=(cnt+fre[2*nums[i]]*k)%1000000007;
                }
            }
         }
        return cnt;
    }
};
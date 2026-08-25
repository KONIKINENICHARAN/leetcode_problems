class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        map<int,int>freq;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        for(int i=k;i<=100;i+=k){
            if(freq[i]==0){
                return i;
            }
            cnt++;
        }
        return k*(cnt+1);
    }
};
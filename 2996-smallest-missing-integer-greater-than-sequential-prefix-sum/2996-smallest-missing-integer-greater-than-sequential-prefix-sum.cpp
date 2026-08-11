class Solution {
public:
    int missingInteger(vector<int>& nums) {
        map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        int s=nums[0];
        for(int i=1;i<nums.size();i++){
             if(nums[i]-nums[i-1]==1){
                 s+=nums[i];
             }
            else{
               break;
            }
        }
            while(freq.count(s)){
                s++;
            }
        return s;
    }
};
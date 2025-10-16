class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                nums[i]=((nums[i]%value)+value)%value;
            }
            else{
                nums[i]=nums[i]%value;
            }
            freq[nums[i]]++;
                while(freq[nums[i]]>1){
                    nums[i]=nums[i]+(freq[nums[i]]-1)*value;
                    freq[nums[i]]++;
                }
        }
        int i=0;
        while(1){
            if(freq[i]==0){
                return i;
            }
            i++;
        }
        return 0;
    }
};
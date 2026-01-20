class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int>A;
        for(int i=0;i<nums.size();i++){
            int cnt=0;
            for(int j=0;j<nums[i];j++){
                if((j | (j+1)) ==nums[i]){
                        A.push_back(j);
                        cnt++;
                        break;
                 }
            }
            if(cnt==0){
                A.push_back(-1);
            }
        }
        return A;
    }
};
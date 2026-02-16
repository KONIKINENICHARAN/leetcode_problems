class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
      map<int,int>freq;
      vector<int>A;
      for(int i=0;i<nums.size();i++){
         freq[nums[i]]++;
      }   
      for(auto it:freq){
        int op=it.first;
        if(it.second-1==0&&freq[op+1]==0&&freq[op-1]==0){
            A.push_back(it.first);
        }
      }
      return A;
    }
};
class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        vector<int>A;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums1.size();j++){
                A.push_back(nums1[i]+nums2[j]);
            }
        }
       unordered_map<int,int>freq;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums1.size();j++){
                freq[nums3[i]+nums4[j]]++;
            }
        }
        int cnt=0;
        for(int i=0;i<A.size();i++){
            int op=-A[i];
                if(freq.count(op)){
                    cnt+=freq[op];
                }
        }
        return cnt;
    }
};
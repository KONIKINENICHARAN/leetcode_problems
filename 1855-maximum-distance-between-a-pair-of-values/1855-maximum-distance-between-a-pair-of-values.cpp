class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        stack<int>A;
        for(int i=nums1.size()-1;i>=0;i--){
            A.push(nums1[i]);
        }
        int j=0,i=0;
        int ans=0;
        while(i<nums2.size()&&j<nums1.size()&&!A.empty()){
            while(i<nums2.size()&&j<nums1.size()&&j<=i&&!A.empty()&&A.top()>nums2[i]){
                j++;
                A.pop();
            }
            if(j<nums1.size()&&i<nums2.size()&&j<=i){
                ans=max(ans,i-j);
                cout<<j<<" "<<i<<endl;
            }
            i++;
        }
        return ans;
    }
};
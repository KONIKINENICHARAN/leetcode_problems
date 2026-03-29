class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
       long long sum=0;
       long long s=0;
       int cnt=0,cnt1=0;
       for(int i=0;i<nums1.size();i++){
           sum+=nums1[i];
           if(nums1[i]==0){
            cnt++;
           }
       } 
        for(int i=0;i<nums2.size();i++){
           s+=nums2[i];
           if(nums2[i]==0){
            cnt1++;
           }
       } 
       sum+=cnt;
       s+=cnt1;
       if(sum==s){
        return sum;
       }
       if(sum>s){
        if(cnt1==0){
            return -1;
        }
         return sum;
       }
       else{
        if(cnt==0){
            return -1;
        }
        return s;
       }
       return -1;
    }
};
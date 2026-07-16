class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        // vector<long long>num=nums[i];
        long long sum=0;
        vector<long long>A;
        int maxi=nums[0];
        for(int i=0;i<nums.size();i++){
            maxi=max(nums[i],maxi);
            A.push_back(maxi);
        }
        vector<long long>D;
        for(int i=0;i<nums.size();i++){
            D.push_back(gcd(nums[i],A[i]));
        }
        sort(D.begin(),D.end());
        int op=D.size()/2;
        for(int i=0;i<op;i++){
            long long kl=gcd(D[i],D[D.size()-i-1]);
            sum+=kl;
        }
        return sum;
    }
};
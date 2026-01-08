class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        int s=0;
        long long i=1,lo=0;
        int j=*max_element(candies.begin(),candies.end());
        while(i<=j){
            int m=(i+j)/2;
            long long cnt=0;
            for(int i=0;i<candies.size();i++){
                cnt+=(candies[i]/m);
                if(cnt>=k){
                    break;
                }
            }
            if(cnt>=k){
                lo=m;
                i=m+1;
            }
            else{
                j=m-1;
            }
        }
        return lo;
    }
};
class Solution {
public:
    int countTrapezoids(vector<vector<int>>& points) {
        map<int,long long>freq;
        for(int i=0;i<points.size();i++){
            freq[points[i][1]]++;
        }
        
        long long S1=0;
        int cnt=0;
        vector<long long>A;
        for(auto it:freq){
            it.second=((it.second*(it.second-1))/2)%1000000007;
            if(it.second!=0){
            A.push_back(it.second);
            }
        }
        if (A.size()<2) {
            return 0;
        }
        long long s=A[0],sum=0;
        for(int i=1;i<(int)A.size();i++){
            long long mul=(s*A[i])%1000000007;
            sum=(sum+mul)%1000000007;
            s=(s+A[i])%1000000007;
        }
        return sum%1000000007;
        }
};
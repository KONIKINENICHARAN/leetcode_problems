class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
           long long sum=0,pro=0;
           sort(satisfaction.begin(),satisfaction.end());
           vector<int>A;
            for(int i=0;i<satisfaction.size();i++){
                sum+=satisfaction[i];
                A.push_back(sum);
                pro+=(i+1)*satisfaction[i];
            }
            long long maxi=pro;
            long long k=A[A.size()-1];
            for(int i=1;i<satisfaction.size();i++){
                pro-=k;
                k-=satisfaction[i-1];
                maxi=max(maxi,pro);
            }
            if(maxi<0){
                return 0;
            }
            return maxi;
        }
};
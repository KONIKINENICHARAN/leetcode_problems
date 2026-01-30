class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int s=0,sum=0;
        int n = cardPoints.size();
        vector<int>A;
        vector<int>B;
        for(int i=0;i<k;i++){
            s+=cardPoints[i];
            A.push_back(s);
        }
        for(int l=n-1;l>=n-k;l--){
            sum+=cardPoints[l];
            B.push_back(sum);
        }
        int maxi=max(s,sum);
        int j=B.size()-2;
        for(int i=0;i<A.size()-1&&j>=0;i++){
           int kl=A[i]+B[j];
            maxi=max(maxi,kl);
             j--;
        }
        return maxi;
    }
};
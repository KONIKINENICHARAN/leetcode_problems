class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        vector<pair<int,int>>A;
        map<int,int>freq;
        for(int i=0;i<arrays.size();i++){
                A.push_back({arrays[i][0],arrays[i][arrays[i].size()-1]});
               freq[arrays[i][0]]++; 
        }
        sort(A.begin(),A.end());
        int mini=A[0].first;
        int minii=A[1].first;
        int maxi=0;
        if(freq[mini]>1){
            for(int i=0;i<A.size();i++){
                int op=abs(A[i].second-mini);
                maxi=max(maxi,op);
            }
        }
        else{
            for(int i=0;i<A.size();i++){
                if(A[i].first==mini){
                  int op=abs(A[i].second-minii);
                  maxi=max(maxi,op);
                }
                else{
                   int op=abs(A[i].second-mini);
                   maxi=max(maxi,op);
                }
            }
        }
        return maxi;
    }
};
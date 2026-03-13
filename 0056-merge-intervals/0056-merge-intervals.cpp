class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& A) {
        int n=A.size();
        sort(A.begin(),A.end());
         int i=0,cnt=0;
         vector<vector<int>>B;
         while(i<A.size()){
            cnt++;
            int op=A[i][1];
            int kl=A[i][0];
            int j=i+1;
            while(j<A.size()&&op>=A[j][0]){
                if(A[j][1]>op){
                op=A[j][1];
                }
                j++;
            }
            i=j;
            B.push_back({kl,op});
         }
         return B;
    }
};
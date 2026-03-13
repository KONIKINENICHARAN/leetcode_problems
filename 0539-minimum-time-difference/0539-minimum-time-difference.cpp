class Solution {
public:
    int findMinDifference(vector<string>& s) {
        vector<int>A;
        for(int i=0;i<s.size();i++){
            string k="";
            k+=s[i][0];
            k+=s[i][1];
            int op=(stoi(k));
            k="";
            k+=s[i][3];
            k+=s[i][4];
            int kl=stoi(k);
            A.push_back(op*60+kl);
        }
        sort(A.begin(),A.end());
       int mini=INT_MAX;
        for(int i=0;i<A.size()-1;i++){
            mini=min(mini,A[i+1]-A[i]);
        }
        mini=min(mini,(1440-A[A.size()-1]+A[0]));
        return mini;
    }
};
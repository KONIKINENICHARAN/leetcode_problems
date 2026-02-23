class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if(s.size()<k){
            return 0;
        }
        map<string,int>freq;
        for(int i=0;i<=s.size()-k;i++){
            freq[s.substr(i,k)]++;
        }
        int klo=pow(2,k);
        // vector<int>A(klo+1,0);
        // for(auto it:freq){
        //     string op=it.first;
        //     int kl=0,j=0;
        //     for(int i=op.size()-1;i>=0;i--){
        //         int io=op[i]-'0';
        //         kl+=io*pow(2,j);
        //         j++;
        //     }
        //     A[kl]++;
        // }
        // for(int i=0;i<=klo;i++){
        //     if(A[i]==0){
        //         return 0;
        //     }
        // }
        if(freq.size()==klo){
            return 1;
        }
        return 0;
    }
};
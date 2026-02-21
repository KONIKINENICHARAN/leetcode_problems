class Solution {
public:
    int minDeletions(string s) {
        map<char,int>freq;
        map<int,int>fre;
        for(int i=0;i<s.size();i++){
            freq[s[i]]++;
        }
        vector<pair<int,int>>A;
        for(auto it:freq){
             fre[it.second]++;
        }
        for(auto it:fre){
            A.push_back({it.first,it.second});
        }
        if(fre.size()==freq.size()){
            return 0;
        }
        sort(A.rbegin(),A.rend());
        int lk=0;
        int j=A[0].first;
        vector<int>B(j+1,0);
        for(int i=0;i<A.size();i++){
            B[A[i].first]=A[i].second;
        }
        int sum=0,cnt=0;
        for(int i=j;i>1;i--){
            if(B[i]!=0){
               cnt=B[i]-1;
               B[i-1]+=B[i]-1;
            }
            sum+=cnt;
        }
        if(B[1]>1){
          sum+=B[1]-1;
        }
        return sum;
    }
};
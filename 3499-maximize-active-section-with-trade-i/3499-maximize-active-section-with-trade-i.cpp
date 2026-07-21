class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        if(s.size()==1){
            if(s[0]=='1'){
                return 1;
            }
            else{
                return 0;
            }
        }
        int o=0;
        string t="";
        t+='1';
        t+=s;
        t+='1';
       int fla=0;
       int i=0;
       vector<pair<int,int>>A;
       while(i<t.size()){
        int cnt=0;
          if(fla==0){
            while(i<t.size()&&t[i]=='1'){
                cnt++;
                i++;
            }
            fla=1;
            A.push_back({1,cnt});
          }
          else{
            while(t[i]=='0'){
                cnt++;
                i++;
            }
            A.push_back({0,cnt});
            fla=0;
          }
          }
          if(A.size()==1){
             return A[0].second-2;
          }
          if(A.size()==3){
            return A[0].second-1+A[2].second-1;
          }
           int ans=0;
          int maxi=0;
          for(int i=0;i<A.size();i+=2){
            if(i==0||i==A.size()-1){
                ans+=(A[i].second-1);
            }
           else{
             ans+=A[i].second;
             maxi=max(A[i-1].second+A[i+1].second,maxi);
           }
          }
          return ans+maxi;
    }
};
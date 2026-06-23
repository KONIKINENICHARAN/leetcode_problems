class Solution {
public:
    long long minCost(vector<int>& arr, vector<int>& brr, long long k) {
       long long ans=0;
       for(int i=0;i<arr.size();i++){
          ans+=abs(arr[i]-brr[i]);
       }
       long long ans1=0;
       map<int,int>freq;
       map<int,int>fre;
       for(int i=0;i<arr.size();i++){
        freq[arr[i]]++;
        fre[brr[i]]++;
       }
       for(auto it:freq){
          int op=it.first;
          int kl=it.second;
          if(fre.count(op)){
            int cnt=fre[op];
             if(kl==cnt){
                freq.erase(op);
                fre.erase(op);
             }
            else if(kl>cnt){
                fre.erase(op);
                freq[op]=kl-cnt;
             }
             else{
                freq.erase(op);
                fre[op]=cnt-kl;
             }
          }
       }
       vector<int>A;
       vector<int>B;
       for(auto it:freq){
         int op=it.second;
         while(op>0){
            A.push_back(it.first);
            op--;
         }
       }
       for(auto it:fre){
         int op=it.second;
         while(op>0){
            B.push_back(it.first);
            op--;
         }
       }
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        for(int i=0;i<A.size();i++){
          ans1+=abs(A[i]-B[i]);
       }
       ans1+=k;
       return min(ans,ans1);
    }
};
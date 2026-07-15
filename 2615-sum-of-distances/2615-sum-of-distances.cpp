class Solution {
public:
    vector<long long> distance(vector<int>& arr) {
         map<int,vector<int>>freq;
         vector<long long>ans(arr.size());
        for(int i=0;i<arr.size();i++){
            freq[arr[i]].push_back(i);
        }
        for(auto it:freq){
            vector<int>arr1(it.second);
              vector<long long>pre(arr1.size());
        vector<long long>suf(arr1.size());
        suf[arr1.size()-1]=0;
        for(int i=arr1.size()-2;i>=0;i--){
            suf[i]=(suf[i+1]+arr1[i+1]);
        }
        pre[0]=0;
        for(int i=1;i<arr1.size();i++){
            pre[i]=(pre[i-1]+arr1[i-1]);
        }
        for(int i=0;i<arr1.size();i++){
            long long op=suf[i]-1LL*((arr1.size()-i-1)*arr1[i]);
            long long kl=1LL*i*arr1[i]-pre[i];
            ans[arr1[i]]=op+kl;
        }
        }
        return ans;
    }
};
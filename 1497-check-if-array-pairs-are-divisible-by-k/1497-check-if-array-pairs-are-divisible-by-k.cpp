class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int>A;
        map<int,int>freq;
        for(int i=0;i<arr.size();i++){
            freq[arr[i]%k]++;
        }
        for(auto it:freq){
            if(it.first==0){
                if(it.second%2!=0){
                    return 0;
                }
            }
            else if(it.first<0){
              int kl=-1*it.first;
            int op=it.first+k;
                int u=-op;
                if(it.second>(freq[kl]+freq[u])){
                    return 0;
                }
              }
            else{
                int kl=-1*it.first;
            int op=k-it.first;
            if(it.second>freq[kl]+freq[op]){
                return 0;
            }
            }
        }
        return 1;
    }
};
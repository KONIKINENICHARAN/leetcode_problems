class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        unordered_map<int,int>freq;
        for(int i=0;i<arr.size();i++){
            freq[arr[i]]++;
        }
        long long cnt=0;
        for(int j=0;j<arr.size()-2;j++){
            freq[arr[j]]--;
            if(freq[arr[j]]==0){
                freq.erase(arr[j]);
            }
            for(int k=j+1;k<arr.size();k++){
                freq[arr[k]]--;
                if(freq[arr[k]]==0){
                    freq.erase(arr[k]);
                }
                int op=target-arr[j]-arr[k];
                if(freq.count(op)){
                    cnt+=freq[op];
                }
                cnt=cnt%1000000007;
                freq[arr[k]]++;
            }
        }
        return cnt/2;
    }
};
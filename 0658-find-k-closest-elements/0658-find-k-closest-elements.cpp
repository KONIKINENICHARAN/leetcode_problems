class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        if(x>=arr[arr.size()-1]){
            vector<int>B;
            for(int i=arr.size()-1;i>=0&&k>0;i--){
                B.push_back(arr[i]);
                k--;
            }
            sort(B.begin(),B.end());
            return B;
        }
        if(x<=arr[0]){
            vector<int>B;
            for(int i=0;i<arr.size()&&k>0;i++){
                B.push_back(arr[i]);
                k--;
            }
            return B;
        }
        int kl=0;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]<=x&&x<=arr[i+1]){
                kl=i;
            }
        }
        vector<int>C;
        int op=kl+1;
        while(op<arr.size()&&kl>=0&&k>0){
            if(abs(arr[kl]-x)<=abs(arr[op]-x)){
                C.push_back(arr[kl]);
                kl--;
            }
            else{
                C.push_back(arr[op]);
                op++;
            }
            k--;
        }
        while(op<arr.size()&&k>0){
            C.push_back(arr[op]);
            op++;
            k--;
        }
        while(kl>=0&&k>0){
            C.push_back(arr[kl]);
            kl--;
            k--;
        }
        sort(C.begin(),C.end());
        return C;
    }
};
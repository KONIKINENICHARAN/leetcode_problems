class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>>A;
        for(int i=0;i<arr.size();i++){
            int cnt=0,k=arr[i];
            while(k>0){
                int op=k%2;
                if(op==1){
                    cnt++;
                }
                k=k/2;
            }
            A.push_back({arr[i],cnt});
        }
        sort(A.begin(),A.end(),[](auto &a,auto &b){
            if(a.second==b.second){
                return a.first<b.first;
            }
            return a.second<b.second;
        });
        vector<int>C;
        for(int i=0;i<A.size();i++){
            C.push_back(A[i].first);
        }
        return C;
    }
};
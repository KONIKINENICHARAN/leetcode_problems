class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int i=0;
        vector<pair<int,int>>A;
            int s=0;
            int j=0;
        while(i<arr.size()&&j<arr.size()){
            while(j<arr.size()&&s<target){
                s+=arr[j];
                j++;
            }
            while(i<j&&s>target){
                s-=arr[i];
                i++;
            }
             if(s==target){
                A.push_back({i,j-i});
                s-=arr[i];
               i++;
            }
        }
        if(A.size()<2){
            return -1;
        }
        int mini=INT_MAX;
        vector<int>B(A.size());
        B[A.size()-1]=A[A.size()-1].second;
        for(int i=A.size()-2;i>=0;i--){
            B[i]=min(B[i+1],A[i].second);
        }
         for(int i=0;i<A.size();i++){
            int op=A[i].first+A[i].second;
            auto it=lower_bound(A.begin(),A.end(),make_pair(op,0));
            if(it!=A.end()){
                int ind = it-A.begin();
                mini=min(mini,A[i].second+B[ind]);
            }
         }
         if(mini==INT_MAX){
            return -1;
         }
         return mini;
    }
};
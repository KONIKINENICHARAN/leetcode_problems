class Solution {
public:
    int minimizedMaximum(int n, vector<int>& quantities) {
        int low=1;
        int high=*max_element(quantities.begin(),quantities.end());
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            int cnt=0;
            for(int i=0;i<quantities.size();i++){
                    cnt+=(quantities[i]+mid-1)/mid;
            }
            if(cnt<=n){
                high=mid-1;
                ans=mid;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};
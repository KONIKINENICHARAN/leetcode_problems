class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int low=1;
        int high=*max_element(position.begin(),position.end());
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            // long long op=1LL*m*mid;
            int kl=position[0];
            int cnt=m;
            cnt--;
            for(int i=1;i<position.size();i++){
                if(kl+mid<=position[i]){
                    kl=position[i];
                    cnt--;
                }
                if(cnt==0){
                    break;
                }
            }
            if(cnt!=0){
                high=mid-1;
            }
            else{
                ans=mid;
                low=mid+1;
            }
        }
        return ans;
    }
};
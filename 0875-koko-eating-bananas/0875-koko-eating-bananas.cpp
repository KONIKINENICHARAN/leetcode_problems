class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int low=1;
        long long kl=piles[0];
        int high=piles[piles.size()-1];
        while(low<=high){
            int mid=(low+high)/2;
            long long cnt=0;
            for(int i=0;i<piles.size();i++){
                if(piles[i]<=mid){
                    cnt++;
                }
                else{
                    cnt+=piles[i]/mid;
                    if(piles[i]%mid!=0){
                        cnt++;
                    }
                }
            }
            if(cnt<=h){
                high=mid-1;
                kl=mid;
            }
            else{
                low=mid+1;
            }
        }
        return kl;
    }
};
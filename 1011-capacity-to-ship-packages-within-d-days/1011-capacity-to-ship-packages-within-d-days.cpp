class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int mini=*max_element(weights.begin(),weights.end());
        int maxi=0;
        for(int i=0;i<weights.size();i++){
            maxi+=weights[i];
        }
        while(mini<maxi){
            int mid=(mini+maxi)/2;
            int cnt=1;
            int i=0,s=0;
            while(i<weights.size()){
                if(s+weights[i]>mid){
                    s=0;
                    cnt++;
                }
                else{
                    s+=weights[i];
                    i++;
                }
            }
            if(cnt<=days){
                maxi=mid;
            }
            else{
                mini=mid+1;
            }
        }
        return mini;
    }
};
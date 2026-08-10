class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(heaters.begin(),heaters.end());
        int maxi=INT_MIN;
        for(int i=0;i<houses.size();i++){
            int op=lower_bound(heaters.begin(),heaters.end(),houses[i])-heaters.begin();
            if(houses[i]>heaters[heaters.size()-1]){
                maxi=max(maxi,abs(heaters[heaters.size()-1]-houses[i]));
            }
            else{
               if(heaters[op]==houses[i]){
                 maxi=max(maxi,0);
               }
               else{
                  if(op!=0){
                     int y=min(abs(heaters[op]-houses[i]),abs(heaters[op-1]-houses[i]));
                     maxi=max(maxi,y);
                  }
                  else{
                    maxi=max(maxi,abs(heaters[op]-houses[i]));
                  }
               }
            }
        }
        return maxi;
    }
};
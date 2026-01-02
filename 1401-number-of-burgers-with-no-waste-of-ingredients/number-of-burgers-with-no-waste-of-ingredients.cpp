class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        int cnt=0,o=tomatoSlices/2;
        if(tomatoSlices==0&&cheeseSlices==0){
            return {0,0};
        }
        if(tomatoSlices%2!=0){
            return {};
        }
        while(o>0){
            if(o+cnt==cheeseSlices){
                return {cnt,o};
            }
            cnt++;
            o-=2;
        }
        return {};
    }
};
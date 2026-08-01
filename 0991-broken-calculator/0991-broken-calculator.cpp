class Solution {
public:
    int brokenCalc(int start, int target) {
        int cnt=0;
        while(target>start){
           if(target%2!=0){
            target+=1;
            cnt++;
           }
           target=target/2;
           cnt++;
        }
        return cnt+(start-target);
    }
};
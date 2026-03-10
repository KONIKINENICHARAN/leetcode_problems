class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
       int cnt=0,cntt=0;
       int i=0;
       while(i<bills.size()){
          if(bills[i]==5){
            cnt++;
          }
          if(bills[i]==10){
             if(cnt>0){
                cntt++;
                cnt--;
             }
             else{ return 0;}
          }
          if(bills[i]==20){
             if(cnt>0&&cntt>0){
                cnt--;
                cntt--;
             }
             else if(cnt>=3){
                cnt-=3;
             }
             else{
                return 0;
             }
          }
          i++;
       }
        return 1;
    }
};
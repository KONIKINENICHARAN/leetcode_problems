class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        if(prices.size()==1){
            return 1;
        }
        long long cnt=prices.size();
        int i=1;
        while(i<prices.size()){
            int j=i;
            long long cntt=1;
            if(prices[j-1]-prices[j]==1){
                while(j<prices.size()&&(prices[j-1]-prices[j])==1){
                    j++;
                    cntt++;
                }
                cnt+=((cntt)*(cntt+1))/2-cntt;
                i=j;
            }
            else{
            i++;
            }
        }
        return cnt;
    }
};
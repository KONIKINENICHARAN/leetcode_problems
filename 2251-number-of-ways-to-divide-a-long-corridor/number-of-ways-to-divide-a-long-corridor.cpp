class Solution {
public:
    int numberOfWays(string corridor) {
        int cnt=0,op=0,po=0;
        for(int i=0;i<corridor.size();i++){
            if(corridor[i]=='S'){
                cnt++;
                if(cnt==2){
                    corridor[i]='0';
                    op=i;
                    cnt=0;
                }
                po++;
            }
        }
        if(po==0||po%2!=0){
            return 0;
        }
        cnt=1;
        int i=0;
        long long o=1;
        while(i<corridor.size()){
            int j=i+1;
            if(corridor[i]=='0'){
                int l=1;
                while(j<corridor.size()&&op>j&&corridor[j]=='P'){
                    l++;
                    j++;
                }
                cnt =((1ll*cnt*l))%1000000007;
            }
            i=j;
        }
        return cnt;
    }
};
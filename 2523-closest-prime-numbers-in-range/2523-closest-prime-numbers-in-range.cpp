class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        int cnt,p=0,mini=INT_MAX,a,b;
        while(left<=right){
            if(left==1){
                left++;
                continue;
            }
            cnt=0;
            for(int i=2;i<=sqrt(left);i++){
                if(left%i==0){
                    cnt++;
                    break;
                }
            }
        if(cnt==0){
            p=left;
            break;
        }
            left++;
        }
        int o=1;
        cnt=0;
        for(int i=left+1;i<=right;i++){
            int l=0;
            for(int j=2;j<=sqrt(i);j++){
                if(i%j==0){
                    l++;
                    break;
                }
            }
            if(l==0){
                o++;
                if(i-p<=2){
                    return {p,i};
                }
                if(mini>i-p){
                    a=p;
                    b=i;
                }
                 p=i;
            }
        }
        if(o==1){
            return {-1,-1};
        }
        return {a,b};
    }
};
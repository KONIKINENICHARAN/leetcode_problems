class Solution {
public:
    int countTriples(int n) {
        int cnt=0;
        for(int i=1;i<n;i++){
            for(int j=i+1;j<=n;j++){
                long long p=pow(i,2)+pow(j,2);
                for(int k=j+1;k<=n;k++){
                    if(pow(k,2)==p){
                        cnt+=2;
                    }
                }
            }
        }
        return cnt;
    }
};
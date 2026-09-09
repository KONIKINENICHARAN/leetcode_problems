class Solution {
public:
    long long countCommas(long long n) {
       int cnt=0;
        long long a=n;
        while(a>0){
            cnt++;
            a=a/10;
        }
        if(cnt<=3){
            return 0;
        }
        vector<int>A;
        A.push_back(0);
         A.push_back(0);
         A.push_back(0);
         A.push_back(0);
        for(int i=4;i<=17;i++){
            int kl=(i-1)/3;
            A.push_back(kl);
        }
        long long sum=0;
        for(int i=4;i<cnt;i++){
            long long kl=(long long)pow(10,i-1);
            long long p=(long long)pow(10,i)-1;
            long long j=p-kl+1;
            sum+=j*A[i];
        }
        long long opo=n-(long long)pow(10,cnt-1)+1;
        sum+=opo*A[cnt];
        return sum;
    }
};
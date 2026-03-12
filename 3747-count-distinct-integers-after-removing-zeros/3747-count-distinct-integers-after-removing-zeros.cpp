class Solution {
public:
    long long countDistinct(long long n) {
        vector<long long>A(17),B(17);

        A[0] = 1;
        B[1] = 9;
        for(int i=1;i<=15;i++){
            A[i] =A[i-1]*9;
            if(i > 1)B[i] = B[i - 1] * 10;
        }
        long long d=0;
        long long po=n;
        while(po>0){
            d++;
            po=po/10;
        }
        cout << d;
        long long sum=0;
        for(int i=1;i<d;i++){
            sum+=A[i];
        }
        while(d > 0){
            if(d==1){
                sum+=n;
                break;
            }
            string z = to_string(n);

            long long f = (B[d] - A[d])/9ll;
            long long val= (z[0] - '0') *(long long) pow(10,d-1) - pow(10,d-1);
             sum+= val - f*(z[0]-'1');
            reverse(z.begin(),z.end());
            z.pop_back();
            d--;
            if(z.size()>0&&z[z.size() - 1] =='0'){
                break;
            }
            reverse(z.begin(),z.end());
            if(d > 0){
             long long h=stoll(z);
             n=h;
            }
        }
        return sum;
    }
};
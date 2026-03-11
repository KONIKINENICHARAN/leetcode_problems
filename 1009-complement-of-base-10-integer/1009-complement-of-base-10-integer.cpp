class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0){
            return 1;
        }
        string k="";
         while(n>0){
            int op=n%2;
            if(op==0){
                op=1;
            }
            else{
                op=0;
            }
            k+=op+'0';
            n=n/2;
         }  
         int lo=0;
         int sum=0;
         for(int i=0;i<k.size();i++){
            int y=k[i]-'0';
            sum+=y*pow(2,lo);
            lo++;
         }
         cout<<k<<endl;
         return sum;
    }
};
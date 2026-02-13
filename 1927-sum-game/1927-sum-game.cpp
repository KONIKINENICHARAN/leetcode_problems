class Solution {
public:
    bool sumGame(string num) {
        int k=num.size();
        int x=k/2;
        int op=0,kl=0;
        int sum=0,s=0;
        for(int i=0;i<k;i++){
            if(i<x){
                if(num[i]!='?'){
                sum+=num[i]-'0';
                }
                else{
                    op++;
                }
            }
            else{
                if(num[i]!='?'){
                s+=num[i]-'0';
                }
                else{
                    kl++;
                }
            }
        }
        if((op+kl)%2) return true;
        if(sum==s){
            if(op==kl){
                return false;
            }
            else{
                return true;
            }
        }
     else if(sum>s){
        if(op>=kl){
            return true;
        }
        else{
            kl=kl-op;
            int klo=(kl)/2;
            int y=sum-s;
            if(9*klo==y){
                return false;
            }
        }
      }
      else{
        if(op<=kl){
            return true;
        }
        else{
            op=op-kl;
            int klo=op/2;
            int y=s-sum;
            if(9*klo==y){
                return false;
            }
        }
      }
      return true;
    }
};
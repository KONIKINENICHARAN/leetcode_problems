class Solution {
public:

   // ind = 10 , num = 3 , flag 
   void fun(vector<int>& digits,vector<bool>& flag,int ind,int num,int size,set<int>&s){
    if(size ==3){
        if(num%2==0){
            s.insert(num);
        }
        return ;
    }
    for(int i=0;i<digits.size();i++){
        if(!flag[i]){
            if(num==0 and digits[i]==0){
                continue;
            }
            flag[i] = 1;
            fun(digits,flag,ind+1,num*10 + digits[i],size+1,s);
            flag[i]=0;
        }
    }
   }
    
    int totalNumbers(vector<int>& digits) {
        int n = digits.size();
        vector<bool>flag(n);
        set<int>s;
        fun(digits,flag,0,0,0,s);
        return s.size();
    }
};
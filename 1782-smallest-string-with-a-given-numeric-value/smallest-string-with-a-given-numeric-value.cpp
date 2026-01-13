class Solution {
public:
    string getSmallestString(int n, int k) {
        int y=k%26,m=k,sum=n;
        string s="";
        for(int i=0;i<n;i++){
            s+="a";
        }
        m=k-sum;
        for(int i=n-1;i>=0 && m>0 ;i--){
            if(m>=25){
                s[i]='z';
                m-=25;
            }
            else{
                char a=m+'a';
                m-=m;
                s[i]=a;
                cout<<a<<" ";
            }
        }
        return s;
    }
};
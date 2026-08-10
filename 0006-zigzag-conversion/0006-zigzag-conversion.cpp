class Solution {
public:
    string convert(string s, int numRows) {
        if(s.size()==1||numRows==1){
            return s;
        }
        string k;
        int a=0,b=2*numRows-2;
        for(int i=0;i<numRows;i++){
             int flag=0;
            if(i==0||i==numRows-1){
                int l=i;
                while(l<s.size()){
                    k+=s[l];
                    l+=(2*numRows-2);
                }
                a+=2;
                b-=2;
            }
            else{
            int j=i;
            while(j<s.size()&&s[j]!='/0'){
                k+=s[j];
                if(flag==0){
                    j+=b;
                    flag=1;
                }
                else{
                    j+=a;
                    flag=0;
                }
            }
            a+=2;
            b-=2;
        }
        }
        return k;
    }
};
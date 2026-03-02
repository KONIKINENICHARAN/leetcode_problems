class Solution {
public:
    string strWithout3a3b(int a, int b) {
        string k="";
        if(a==b){
            while(a>0){
                k+='a';
                k+='b';
                a--;
            }
            return k;
        }
        if(a>b){
            while((a-b)>1){
                k+="aa";
                if(b>0){
                k+='b';
                }
                a-=2;
                b-=1;
            }
            while(a>0){
                k+='a';
                if(b>0){
                k+='b';
                }
                b--;
                a--;
            }
            return k;
        }
        if(a<b){
            while((b-a)>1){
                k+="bb";
                if(a>0){
                k+='a';
                }
                a-=1;
                b-=2;
            }
            while(b>0){
                k+='b';
            if(a>0){
                k+='a';
            }
                b--;
                a--;
            }
            return k;
        }
        return "";
    }
};
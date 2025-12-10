class Solution {
public:
    string addStrings(string num1, string num2) {
        string k="";
        int i=num1.size()-1,j=num2.size()-1;
        int c=0;
        while(i>=0||j>=0||c){
            int s=c;
            if(i>=0){
                s=s+num1[i]-'0';
                i--;
            }
            if(j>=0){
                s=s+num2[j]-'0';
                j--;
            }
            k+=(s%10)+'0';
            s=s/10;
            c=s%10;
        }
        reverse(k.begin(),k.end());
        return k;
    }
};
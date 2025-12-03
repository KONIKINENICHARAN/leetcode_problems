class Solution {
public:
    string addBinary(string a, string b) {
        string s="";
        int c=0;
        int i=a.size()-1,j=b.size()-1;
        int k=max(i,j);
        while(k>=0){
            int s1=c;
            while(i>=0){s1+=a[i--]-'0';break;}
            while(j>=0){s1+=b[j--]-'0';break;}
            c=s1/2;
            int p=s1%2;
            s+=p+'0';
            k--;
        }
        if(c!=0){
        s+=to_string(c%2);
        }
        reverse(s.begin(),s.end());
        return s;
        }
};
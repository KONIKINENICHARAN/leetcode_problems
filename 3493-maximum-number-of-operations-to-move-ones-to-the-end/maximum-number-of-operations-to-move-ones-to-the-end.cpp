class Solution {
public:
    int maxOperations(string s) {
       int cnt=0; 
       int i=0,sum=0;
       while(i<s.size()-1){
        if(s[i]=='1'&&s[i+1]=='0'){
            int j=i;
            while(j>=0&&s[j]=='1'){
                cnt++;
                j--;
            }
            sum+=cnt;
        }
        i++;
       }
       return sum;
    }
};
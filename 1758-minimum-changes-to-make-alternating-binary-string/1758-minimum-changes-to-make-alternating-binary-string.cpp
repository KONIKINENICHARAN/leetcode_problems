class Solution {
public:
    int minOperations(string s) {
        int cnt=0,cntt=0;
        for(int i=0;i<s.size();i++){
            if(i%2!=0&&s[i]=='1'){
                cnt++;
            }
            if(i%2==0&&s[i]=='0'){
                cnt++;
            }
        }
         for(int i=0;i<s.size();i++){
            if(i%2!=0&&s[i]=='0'){
                cntt++;
            }
            if(i%2==0&&s[i]=='1'){
                cntt++;
            }
        }
        return min(cnt,cntt);
    }
};
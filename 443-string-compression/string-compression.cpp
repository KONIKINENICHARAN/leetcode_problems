class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0,k=0;
        while(i<chars.size()){
            int j=i,cnt=0;
            while(j<chars.size()&&chars[i]==chars[j]){
                cnt++;
                j++;
            }
            chars[k++]=chars[i];
            int l=0,op=0;
            if(cnt>1){
                int rev=0,original=cnt;
                while(cnt>0){
                    rev=rev*10+cnt%10;
                    cnt=cnt/10;
                }
                while(rev>0){
                    chars[k++]=rev%10+'0';
                    rev=rev/10;
                }
                while(original>0){
                    if(original%10>0){
                        break;
                    }
                    op++;
                    original=original/10;
                }
                while(op>0){
                    chars[k++]='0';
                    op--;
                }
            }
            i=j;
        }
        return k;
    }
};
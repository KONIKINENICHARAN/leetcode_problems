class Solution {
public:
    bool checkOnesSegment(string s) {
        int i=0,cnt=0;
        while(i<s.size()){
            if(s[i]=='1'){
                cnt++;
              while(i<s.size()&&s[i]=='1'){
               i++;
             }
              if(cnt==2){
                return 0;
            }
            }
            else{
                i++;
            }
        }
        return 1;
    }
};
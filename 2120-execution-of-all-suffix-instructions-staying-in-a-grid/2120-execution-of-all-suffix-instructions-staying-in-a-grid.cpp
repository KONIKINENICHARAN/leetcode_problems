class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        vector<int>A;
       for(int i=0;i<s.size();i++){
        int cnt=0;
        int row=startPos[0];
        int col=startPos[1];
        int fla=0;
          for(int j=i;j<s.size();j++){
              if(s[j]=='L'){
                if(col==0){
                    A.push_back(cnt);
                    fla=1;
                    break;
                }
                else{
                    col--;
                    cnt++;
                }
              }
               else if(s[j]=='R'){
                if(col==n-1){
                    A.push_back(cnt);
                    fla=1;
                    break;
                }
                else{
                    col++;
                    cnt++;
                }
              }
               else if(s[j]=='U'){
                if(row==0){
                    A.push_back(cnt);
                    fla=1;
                    break;
                }
                else{
                    row--;
                    cnt++;
                }
              }
              else{
                if(row==n-1){
                    A.push_back(cnt);
                    fla=1;
                    break;
                }
                else{
                    row++;
                    cnt++;
                }
              }
          }
          if(fla==0){
            A.push_back(cnt);
          }
       }
       return A;
    }
};
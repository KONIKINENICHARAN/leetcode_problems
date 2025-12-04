class Solution {
public:
    int countCollisions(string directions) {
        int cnt=0;
        for(int i=0;i<directions.size()-1;i++){
            if(directions[i]=='R'&&directions[i+1]=='L'){
                directions[i]='S';
                directions[i+1]='S';
                i++;
                cnt+=2;
            }
        }
        for(int i=1;i<directions.size();i++){
            if(directions[i]=='L'&&directions[i-1]=='S'){
                directions[i]='S';
                cnt++;
            }
        }
        for(int i=directions.size()-1;i>=0;i--){
            if(directions[i]=='R'&&directions[i+1]=='S'){
                directions[i]='S';
                cnt++;
            }
        }
        return cnt;
    }
};
class Solution {
public:
    bool winnerOfGame(string colors) {
        int cnt=0,o=0,i=0;
        if(colors.size()<=2){
            return 0;
        }
        while(i<colors.size()-2){
            if(colors[i]=='A'&&colors[i+1]=='A'&&colors[i+2]=='A'){
                cnt++;
            }
            if(colors[i]=='B'&&colors[i+1]=='B'&&colors[i+2]=='B'){
                o++;
            }
            i++;
        }
        if(cnt>o){
            return 1;
        }
         return 0;   
    }
};
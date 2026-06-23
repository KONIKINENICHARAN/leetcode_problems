class Solution {
public:
    int minimumLevels(vector<int>& possible) {
        int sum=0;
        // if(possible.size()==2){
        //     if(possible[0]==1&&possible[1]==0){
        //         return 1;
        //     }
        //     else{
        //         return -1;
        //     }
        // }
        for(int i=0;i<possible.size();i++){
            if(possible[i]==0){
                sum--;
            }
            else{
                sum++;
            }
        }
        int s=0;
        for(int i=0;i<possible.size()-1;i++){
            if(possible[i]==1){
                s++;
            }
            else{
                s--;
            }
            int op=sum-s;
            if(s>op){
                return i+1;
            }
        }
        return -1;
    }
};
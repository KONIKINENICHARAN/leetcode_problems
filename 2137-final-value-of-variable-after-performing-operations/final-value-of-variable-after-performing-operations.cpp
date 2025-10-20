class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int cnt=0,o=0;
        for(int i=0;i<operations.size();i++){
            string a=operations[i];
            if(a=="X++"||a=="++X"){
                cnt++;
            }
            else{
                o++;
            }
        }
        return cnt-o;
    }
};
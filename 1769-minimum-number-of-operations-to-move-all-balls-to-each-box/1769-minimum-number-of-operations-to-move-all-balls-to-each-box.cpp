class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>A;
        int s=0;
        int cnt=0;
        for(int i=0;i<boxes.size();i++){
            if(boxes[i]=='1'){
                s+=i;
                if(i!=0){
                cnt++;
                }
            }
        }
        A.push_back(s);
        int o=0;
        if(boxes[0]=='1'){
            o++;
        }
        for(int i=1;i<boxes.size();i++){
            s=s+o-cnt;
            if(boxes[i]=='1'){
                o++;
                cnt--;
            }
            A.push_back(s);
        }
        return A;
    }
};
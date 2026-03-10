class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
        // if(barcodes.size()==1){
        //     return barcodes;
        // }
        priority_queue<pair<int,int>>A;
        unordered_map<int,int>freq;
        for(int i=0;i<barcodes.size();i++){
            freq[barcodes[i]]++;
        }
        for(auto it:freq){
            A.push({it.second,it.first});
        }
        vector<int>B;
        while(A.size()>1){
            auto p=A.top();
            A.pop();
             B.push_back(p.second);
              p.first--;
            auto op=A.top();
            A.pop();
            B.push_back(op.second);
            op.first--;
            if(p.first>0){
                A.push(p);
              }
            if(op.first>0){
                A.push(op);
            }
        }
        if(!A.empty()){
                B.push_back(A.top().second);
        }
        return B;
    }
};
class Solution {
public:
    int latestTimeCatchTheBus(vector<int>& buses, vector<int>& passengers, int capacity) {
        priority_queue<int,vector<int>,greater<int>>A;
        unordered_map<int,int>freq;
        for(int i=0;i<passengers.size();i++){
            A.push(passengers[i]);
            freq[passengers[i]]++;
        }
        sort(buses.begin(),buses.end());
        int i=0;
        int ans=-1;
        while(i<buses.size()-1){
            int op=0;
            while(!A.empty()&&A.top()<=buses[i]&&op<capacity){
                A.pop();
                op++;
            }
            i++;
        }
        int op=0;
         while(!A.empty()&&A.top()<=buses[i]&&op<capacity){
              ans=A.top();
                A.pop();
                op++;
        }
        int y;
        if(op<capacity){
            y=buses.back();
        }
        else{
            y=ans-1;
        }
        while(freq.count(y)||y>buses[buses.size()-1]){
            y--;
        }
        return y;
    }
};
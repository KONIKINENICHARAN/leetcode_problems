class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
        sort(processorTime.begin(),processorTime.end());
        sort(tasks.rbegin(),tasks.rend());
         int maxi=processorTime[0]+tasks[0];
        int i=1,j=0;
        while(i<processorTime.size()){
               maxi=max(maxi,processorTime[i]+tasks[j+4]);
               j+=4;
            i++;
        }
        return maxi;
    }
};
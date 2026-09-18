class Solution {
public:
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        sort(properties.begin(),properties.end());
        int maxi=INT_MIN;
        int cnt=0;
        int i=properties.size()-1;
        while(i>=0){
            int j=i;
            int maxi1=INT_MIN;
            while(j>=0&&properties[i][0]==properties[j][0]){
                if(properties[j][1]<maxi){
                    cnt++;
                }
                maxi1=max(maxi1,properties[j][1]);
                j--;
            }
            maxi=max(maxi,maxi1);
            i=j;
        }
        return cnt;
    }
};
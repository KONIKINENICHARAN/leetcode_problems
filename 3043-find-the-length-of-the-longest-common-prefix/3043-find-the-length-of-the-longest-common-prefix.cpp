class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>freq;
        for(int i=0;i<arr2.size();i++){
            string op=to_string(arr2[i]);
            int y=0;
            for(int j=0;j<op.size();j++){
                int u=op[j]-'0';
                y=y*10+u;
                freq[y]++;
            }
        }
        map<int,int>fre;
        for(int i=0;i<arr1.size();i++){
            string op=to_string(arr1[i]);
            int y=0;
            for(int j=0;j<op.size();j++){
                int u=op[j]-'0';
                y=y*10+u;
                fre[y]++;
            }
        }
        int maxi=0;
        for(auto it:freq){
            if(fre.count(it.first)){
                string y=to_string(it.first);
                int z=y.size();
                maxi=max(maxi,z);
            }
        }
        return maxi;
    }
};
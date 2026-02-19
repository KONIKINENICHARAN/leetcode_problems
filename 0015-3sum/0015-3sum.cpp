class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>D;
        vector<int>A;
        map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        if(freq[0]>=3){
            D.push_back({0,0,0});
        }
        for(auto it:freq){
            A.push_back(it.first);
        }
        for(int i=0;i<A.size();i++){
            map<vector<int>,int>fre;
            for(int j=i+1;j<A.size();j++){
                 vector<int>B;
                 int a=A[i]+A[j];
                  int h=-a;
                if(freq.count(h)){
                    int x=A[i];
                    int y=A[j];
                    int z=h;
                    map<int,int>lpo;
                    lpo[x]++;
                    lpo[y]++;
                    lpo[z]++;
                    int fla=0;
                    for(auto it:lpo){
                        if(freq[it.first]<it.second){
                            fla=1;
                            break;
                        }
                    }
                    if(fla==0){
                    B.push_back(A[i]);
                     B.push_back(A[j]);
                      B.push_back(h);
                    sort(B.begin(),B.end());
                    fre[B]++;
                    }
                }
            }
             for(auto it:fre){
                D.push_back(it.first);
             }
             freq.erase(A[i]);
        }
        return D;
    }
};
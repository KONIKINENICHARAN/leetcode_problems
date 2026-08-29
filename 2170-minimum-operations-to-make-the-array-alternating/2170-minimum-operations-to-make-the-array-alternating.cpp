class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        if(nums.size()==1){
            return 0;
        }
        map<int,int>fre;
        map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                fre[nums[i]]++;
            }
            else{
                freq[nums[i]]++;
            }
        }
        vector<pair<int,int>>even;
        vector<pair<int,int>>odd;
        for(auto it:fre){
            even.push_back({it.second,it.first});
        }
        for(auto it:freq){
            odd.push_back({it.second,it.first});
        }
        sort(even.rbegin(),even.rend());
        sort(odd.rbegin(),odd.rend());
        int s=0;
        int s1=0;
        for(int i=1;i<even.size();i++){
            s+=even[i].first;
        }
        for(int i=1;i<odd.size();i++){
            s1+=odd[i].first;
        }
        if(even[0].second!=odd[0].second){
            return s+s1;
        }
       if(even.size()==1&&odd.size()==1){
           return min(even[0].first,odd[0].first);
       }
       if(even.size()==1){
           return s1+odd[0].first-odd[1].first;
       }
       if(odd.size()==1){
           return s+even[0].first-even[1].first;
       }
       int op=s+s1-odd[1].first+odd[0].first;
       int kl=s+s1-even[1].first+even[0].first;
       return min(op,kl);
    }
};
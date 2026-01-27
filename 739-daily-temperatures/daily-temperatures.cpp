class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>A(temperatures.size(),0);
        stack<int>st;
        for(int i=temperatures.size()-1;i>=0;i--){
            int j=i;
            while(!st.empty()&&temperatures[i]>=temperatures[st.top()]){
                st.pop();
            }
            if(!st.empty()){
                A[i]=st.top()-i;
            }
            st.push(i);
        }
        return A;
    }
};
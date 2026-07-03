class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        stack<int>st;
        st.push(heights[heights.size()-1]);
        vector<int>A(heights.size());
        A[heights.size()-1]=0;
        for(int i=heights.size()-2;i>=0;i--){
            int cnt=0;
            while(!st.empty()&&st.top()<=heights[i]){
                st.pop();
                cnt++;
            }
            if(st.empty()){
                A[i]=cnt;
            }
            else{
                A[i]=cnt+1;
            }
            st.push(heights[i]);
        }
        return A;
    }
};
class MinStack {
public:
 stack<pair<int,int>>A;
 int mini=INT_MAX;
    MinStack() {

    }
    
    void push(int value) {
        mini=min(mini,value);
        A.push({value,mini});
    }
    void pop() {
            A.pop();
            if(A.empty()){
                mini=INT_MAX;
            }
            else{
                mini=A.top().second;
            }
    }
    
    int top() {
            return A.top().first;
    }
    
    int getMin() {
            return A.top().second;
    }
};
/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
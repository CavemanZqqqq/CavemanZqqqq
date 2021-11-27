class MinStack {
public:
    vector<int> st;
    vector<int> sort;
    MinStack() {
        sort.push_back(INT_MAX);
    }
    
    void push(int val) {
        st.push_back(val);
        if(val < sort.back()){
            sort.push_back(val);
        } else {
            sort.push_back(sort.back());
        }
        
    }
    
    void pop() {
        st.pop_back();
        sort.pop_back();
    }
    
    int top() {
        return st.back();
    }
    
    int getMin() {
        return sort.back();
    }
};


/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

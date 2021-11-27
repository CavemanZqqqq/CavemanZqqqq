class MyStack {
public:
    queue<int> q1;
    queue<int> q2;
    MyStack() {

    }
    
    void push(int x) {
        if (q1.empty()) {
            q1.push(x);
        } else {
            q2.push(x);
            while (!q1.empty()) {
                q2.push(q1.front());
                q1.pop();
            }           
            swap(q1, q2);
        }
    }
    
    int pop() {
        int r = q1.front();
        q1.pop();
        return r;
    }
    
    int top() {
        int r = q1.front();
        return r;
    }
    
    bool empty() {
       bool y =  q1.empty();
       return y;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */

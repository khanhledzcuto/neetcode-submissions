class MinStack {
private:
    stack<int> min_stack; //Min Value Store
    stack<int> m_stack; //Primary
public:
    MinStack() {}
    
    void push(int val) {
        m_stack.push(val);
        if(min_stack.empty() || val <= min_stack.top()) min_stack.push(val);
    }
    
    void pop() {
        int e = m_stack.top();
        m_stack.pop();
        if(!min_stack.empty() && e == min_stack.top()) min_stack.pop();
    }
    
    int top() {
        return m_stack.top();
    }
    
    int getMin() {
        return min_stack.top();
    }
};

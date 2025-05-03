// Last updated: 5/3/2025, 3:00:21 PM
class MinStack {
public:
    stack<int> st;
    stack<int> m_stack;

    MinStack() {}
    
    void push(int val) {
        st.push(val);
        if (!m_stack.empty()) {
            int mini = min(m_stack.top(), val);
            m_stack.push(mini);
        } else {
            m_stack.push(val);
        }
    }
    
    void pop() {
        st.pop();
        m_stack.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return m_stack.top();
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
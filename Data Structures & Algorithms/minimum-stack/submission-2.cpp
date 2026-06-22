class MinStack {
public:

    stack<int> s;
    stack<int> mins;
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        int currMin = (mins.empty() ? val : mins.top());
        val = min(val,currMin);
        mins.push(val);
    }
    
    void pop() {
        s.pop();
        mins.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return mins.top();
    }
};

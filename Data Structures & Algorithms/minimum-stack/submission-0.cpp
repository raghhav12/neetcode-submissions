class MinStack {
private:
    stack<int> s;
    stack<int> mins;
public:
    MinStack() {}
    
    void push(int val) {
        s.push(val);
        int wanted = (mins.empty()) ? val : mins.top();
        val = min(val,wanted);
        mins.push(val);
    }
    
    void pop() {
        s.pop();
        mins.pop();
    }
    
    int top() {
        return  s.top();
    }
    
    int getMin() {
        return mins.top();
    }
};

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;

        for(string str: tokens) {
            if(!isOp(str)) {
                s.push(stoi(str));
            } else {
                if (s.size() < 2) return -1;
                int b = s.top();s.pop();
                int a = s.top();s.pop();
                if (str == "+") {
                    s.push(a+b);
                } else if (str == "-") {
                    s.push(a-b);
                } else if (str == "*") {
                    s.push(a*b);
                } else if (str == "/") {
                    s.push(a/b);
                }
            }
        }
        return s.top();
    }

    bool isOp(string s) {
        return s == "+" || s == "-" || s == "*" || s == "/";
    }
};

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n = tokens.size();
        stack<int> s;

        for(int i = 0;i<n;i++) {
            string str = tokens[i];
            if (str != "+" && str != "-" && str != "*" && str != "/") {
                s.push(stoi(str));
            } else {
                int b = s.top();s.pop();
                int a = s.top();s.pop();
                if (str == "+") {
                    s.push(a+b);
                } else if(str == "-") {
                    s.push(a-b);
                } else if(str == "*") {
                    s.push(a*b);
                } else if (str == "/") {
                    s.push(a/b);
                }
            }
        }
        return s.top();
    }
};

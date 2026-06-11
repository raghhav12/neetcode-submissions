class Solution {
public:
    bool isValid(string str) {
        stack<char> s;
        for(int i =0;i<str.length();i++) {
            char ch = str[i];
            if (ch == '(' || ch == '[' || ch == '{') {
                s.push(ch);
            } else {
                if(s.empty()) return false;

                if ((ch == '}' && s.top() != '{') || 
                (ch == ')' && s.top() != '(') || 
                (ch == ']' && s.top() != '[')) 
            {
                return false;
            } else {
                s.pop();
            }
            }
        }
        return s.size() == 0;
    }
};

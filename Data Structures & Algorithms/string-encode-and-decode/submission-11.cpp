class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";
        for(string s: strs) {
            ans+= to_string(s.size()) + '#' + s;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i =0;
        while(i<s.length()) {
            int j = i;
            while(s[j] != '#') {
                j++;
            }
            int count = stoi(s.substr(i,j-i));
            string newStr = s.substr(j+1,count);
            ans.push_back(newStr);
            i = j + count + 1;
        }
        return ans;
    }
};

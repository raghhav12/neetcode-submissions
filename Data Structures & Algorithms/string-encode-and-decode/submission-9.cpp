class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";
        for(auto &s: strs) {
            ans += to_string(s.length()) + "#" + s;
        }
        cout<<ans;
        return ans;
    }

    vector<string> decode(string s) {
       vector<string> ans;
       int i =0;
       while (i<s.size()) {
            int j = i;
            while(s[j] != '#') {
                j++;
            }
            int counter = stoi(s.substr(i,j-i));
            string word = s.substr(j+1,counter);
            ans.push_back(word);
            i = j + counter + 1;
        }
       return ans;
    }
};

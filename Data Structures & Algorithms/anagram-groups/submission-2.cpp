class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;

        for(int i = 0;i<strs.size();i++) {
            if (strs[i] == "vis") continue;
            vector<string> temp;
            for(int j = i+1;j<strs.size();j++) {
                if (isAn(strs[i],strs[j])) {
                    temp.push_back(strs[j]);
                    strs[j] = "vis";
                }
            }
            temp.push_back(strs[i]);
            strs[i] = "vis";
            ans.push_back(temp);
        }
        return ans;

    }

    bool isAn(string s, string t) {
        if (s.length() != t.length()) return false;
        if(s == t) return true;
        unordered_map<char, int> m1,m2;

        for(int i = 0;i<s.length();i++) {
            m1[s[i]]++;
            m2[t[i]]++;
        }

        return m1 == m2;
    }
};

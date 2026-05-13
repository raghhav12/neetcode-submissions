class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        unordered_map<char,int> m1;
        unordered_map<char,int> m2;
        int n = s.length();

        for(int i=0;i<n;i++) {
            m1[s[i]]++;
            m2[t[i]]++;
        }

        for(int i=0;i<n;i++) {
            if (m1[s[i]] != m2[s[i]] || m2[t[i]] != m1[t[i]]) return false;
        }
        return true;
    }
};

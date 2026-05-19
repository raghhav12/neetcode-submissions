class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        int x1 = 0;
        int x2 = 0;

        for(int i=0;i<s.length();i++) {
            x1 = x1 ^ s[i];
            x2 = x2 ^ t[i];
        }
        if(x1 == 0 || x2 == 0) return false;

        return (x1 ^ x2) == 0;
    }
};

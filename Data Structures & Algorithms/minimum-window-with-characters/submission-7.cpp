class Solution {
public:
    string minWindow(string s, string t) {
        int n1 = s.length(), n2 = t.length();
        if(s == t) return s;
        unordered_map<char, int> tf, tf2;
        for(char ch: t) {
            tf[ch]++;
        }
        pair<int, int> res = {-1,-1};
        int reslen = INT_MAX;
        int l = 0, have = 0, need = tf.size();

        for(int r=0;r<n1;r++) {
            char c = s[r];
            tf2[c]++;
            
            if (tf.count(c) && tf[c] == tf2[c]) {
                have++;
            }

            while(have == need) {
                if ((r-l+1) < reslen) {
                    reslen = r-l+1;
                    res = {l,r};
                }
                tf2[s[l]]--;
                if (tf.count(s[l]) && tf2[s[l]] < tf[s[l]]) {
                    have--;
                }
                l++;
            }
        }
        return reslen == INT_MAX ? "" : s.substr(res.first,reslen);
    }
};

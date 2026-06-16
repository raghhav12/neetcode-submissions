class Solution {
public:
    string minWindow(string s, string t) {
        if(s==t) return s;
        unordered_map<char, int> freq, freq2;
        for(auto ch: t) {
        freq[ch]++;
        }
        int reslen = INT_MAX;
        pair<int, int> res = {-1,-1};
        int l = 0;
        int have = 0, need = freq.size();

        for(int r = 0;r<s.length();r++) {
            char c = s[r];
            freq2[c]++;

            if(freq.count(c) && freq[c] == freq2[c]) {
                have++;
            }

            while(have == need) {
                if((r-l+1) < reslen) {
                    reslen = r-l+1;
                    res = {l,r};
                }

                freq2[s[l]]--;
                if(freq.count(s[l]) && freq2[s[l]] < freq[s[l]]) {
                    have--;
                }
                l++;
            }
        }

        return reslen != INT_MAX ? s.substr(res.first, reslen) : "";
    }
};

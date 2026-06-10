class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxfreq = 0,l =0,ans=0, n= s.length();
        unordered_map<char, int> mp;
        for(int r = 0;r<n;r++) {
            mp[s[r]]++;
            maxfreq = max(maxfreq, mp[s[r]]);
            while((r -l +1) - maxfreq > k) {
                mp[s[l]]--;
                l++;
            }
            ans = max(ans, r-l+1);
        }
        return ans;
    }
};

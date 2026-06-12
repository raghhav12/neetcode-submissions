class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();

        unordered_map<char, int> mp;
        int l = 0;
        int maxfreq = 0;
        int ans = 0;
        for(int i=0;i<n;i++) {
           mp[s[i]]++;
           maxfreq = max(maxfreq,mp[s[i]]);

           while((i-l+1) - maxfreq > k) {
            mp[s[l]]--;
            l++;
           }
           ans = max(ans, i-l+1);
        }

        return ans;
    }
};

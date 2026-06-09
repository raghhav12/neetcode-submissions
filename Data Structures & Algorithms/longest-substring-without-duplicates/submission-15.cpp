class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        int n = str.length();
        if (n <=1) return n;
        int maxlen = 0, currlen = 0;
        int left = 0, right = 0;
        unordered_map<char, int> mp;

        for(;right < n;right++) {
            if (mp.count(str[right]) && mp[str[right]] >= left) {
                maxlen = max(maxlen, right - left);
                left = mp[str[right]] + 1;
            }
            mp[str[right]] = right; 
            cout << right << " " << maxlen << endl;
        }
        return max(maxlen, right - left);
    }
};

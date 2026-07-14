class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int ans  = 0;
        int curr = 0;
        int maxlen = -1;
        for(auto i: s) {
            if (s.find(i - 1) == s.end()) {
                curr = i;
                maxlen = 1;
            }

            while (s.find(curr + 1) != s.end()) {
                curr++;
                maxlen++;
            }
            ans = max(maxlen,ans);
        }
        return ans;
    }
};

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> s(nums.begin(),nums.end());
        int maxlen = 0;
        for(int x : s) {
            if (s.find(x-1) == s.end()) {
                int curr = x;
                int m = 1;

                while(s.find(curr+1) != s.end()) {
                    m++;
                    curr++;
                }
                maxlen = max(m,maxlen);
            }
        }

        return maxlen;
    }
};

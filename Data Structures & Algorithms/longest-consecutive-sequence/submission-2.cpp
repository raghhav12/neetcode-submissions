class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        sort(nums.begin(),nums.end());
        set<int> s;
        int maxlen = 1;
        s.insert(nums[0]);
        for(int i =1;i<n;i++) {
            if(nums[i] == *s.rbegin()) continue;
            if (nums[i] == *s.rbegin() + 1) {
                s.insert(nums[i]);
                if (maxlen < s.size()) {
                    maxlen = s.size();
                }
            } else {
                s.clear();
                s.insert(nums[i]);
            }
        }
        return maxlen;
    }
};

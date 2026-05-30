class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        sort(nums.begin(),nums.end());
        stack<int> s;
        s.push(nums[0]);
        int currlen = 1;

        for(int i =1;i<n;i++) {
            if(nums[i] == s.top()) continue;
            if (nums[i] == s.top() + 1) {
                s.push(nums[i]);
                if (currlen < s.size()) {
                    currlen = s.size();
                }
            } else {
                while(!s.empty()) s.pop();
                s.push(nums[i]);
            }
        }

        return currlen;
    }
};

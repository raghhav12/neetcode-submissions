class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        if(n < k) return {};
        
        int windows = n-k+1;
        vector<int> ans(windows,INT_MIN);

        for(int i=0;i<windows;i++) {
            int curr = nums[i];

            for(int j = i;j<i+k;j++) {
                if(ans[i] < nums[j]) {
                    ans[i] = nums[j];
                }
            }
        }
        return ans;
    }
};

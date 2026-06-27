class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        int n = nums.size();
        vector<int> ans;
        
        for(int i = 0; i<n; i++) {
            // compare the incoming elements
            while(!dq.empty() && nums[dq.back()] < nums[i]) {
                dq.pop_back();
            }

            // decrease the window from the back and add new element
            while(!dq.empty() && dq.front() <= i - k) {
                dq.pop_front();
            }

            // insert element in deque
            dq.push_back(i);

            // if window size achieved add in ans from the front
            if (i >= k - 1) {
                ans.push_back(nums[dq.front()]);
            }
        }

        return ans;
    }
};

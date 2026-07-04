class Solution {
public:
    int findMin(vector<int> &nums) {
       int ans = INT_MAX, n = nums.size();
       int l = 0, h = n - 1;

       while (l<=h) {
            int mid = l + (h-l)/2;

            ans = min(ans, nums[mid]);
            if (nums[l] > nums[h] && abs(nums[mid] - nums[h] > abs(nums[mid] - nums[l]))) {
                l = mid + 1;
            } else  {
                h = mid - 1;
            }
        }
        return ans;
    }
};

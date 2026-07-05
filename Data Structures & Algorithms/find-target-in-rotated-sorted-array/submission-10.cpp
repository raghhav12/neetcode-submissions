class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l =0 , h = n -1;
        if (nums[l] == target) return l;
        if(nums[h] == target) return h;

        int ans = -1;
        while(l<=h) {
            int mid = l+(h-l)/2;
            if (nums[mid] == target) return mid;
            if (nums[mid] >= nums[l]) {
                if (target > nums[mid] || target < nums[l]) {
                   l = mid + 1;
                } else {
                    h = mid -1;
                }
            } else if (nums[mid] < nums[l]) {
                if (target < nums[mid] || target > nums[h]) {
                   h = mid - 1;
                } else {
                    l = mid + 1;
                }
            }
        } 
        return -1;
    }
};

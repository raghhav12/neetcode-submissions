class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {

        int start = 0, end = arr.size() -1;

        while(start < end) {
            int sum = arr[start] + arr[end];
            if (sum == target) {
                return {start + 1,end + 1};
            } else if (sum > target) {
                end--;
            } else {
                start++;
            }
        }
        return {};
    }
};

class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int start = 0, end = arr.size() -1;
        // while(start < end) {
        //     int sum = arr[start] + arr[end];
        //     if (sum == target) {
        //         return {start + 1,end + 1};
        //     } else if (sum > target) {
        //         end--;
        //     } else {
        //         start++;
        //     }
        // }
        // return {};
        unordered_map<int,int> m;
        for(int i = 0;i<arr.size();i++) {
            int h = target - arr[i];
            if(m.count(h)) {
                return {m[h],i+1};
            } else {
                m[arr[i]] = i+1;
            }
        }
    }
};

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i =0;i<n;i++) {
            if(i > 0 && nums[i] == nums[i-1]) continue;
            int t = -nums[i];
            int s = i+1, e = n-1;
            while(s < e) {
                int curr = nums[s] + nums[e];
                if (curr == t) {
                    ans.push_back({nums[i],nums[s],nums[e]});
                    s++;
                    e--;
                    while(s<e && nums[s] == nums[s-1]) s++;
                    while(s<e && nums[e] == nums[e+1]) e--;
                } else if(curr > t) {
                        e--;
                    } else {
                        s++;
                    }
            }
        }
        return ans;
    }
};

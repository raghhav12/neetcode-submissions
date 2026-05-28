class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(),1);
        for(int i =0;i< nums.size();i++) {
            int n = 1;
            for(int j = 0;j<nums.size();j++) {
                if (j != i) {
                 n*=nums[j];   
                }
            }
            ans[i] = n;
        }
        return ans;
    }
};

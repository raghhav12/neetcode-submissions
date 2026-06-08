class Solution {
public:
    int trap(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;
        int l = 0, r = n-1;
        int leftmax = arr[l], rightmax = arr[r];

        while(l<r) {
            if(leftmax < rightmax) {
                l++;
                leftmax = max(leftmax, arr[l]);
                ans+= leftmax - arr[l];
            } else {
                r--;
                rightmax = max(rightmax, arr[r]);
                ans+= rightmax - arr[r];
            }
        }

        return ans;
    }
};

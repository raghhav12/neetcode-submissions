class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        for(int i =0;i<arr.size();i++) {
            if(i>0 && arr[i] == arr[i-1]) continue;
            int target = -arr[i];
            int l = i+1, r = arr.size()-1;
            while(l<r) {
                int sum = arr[l] + arr[r];
                if(arr[l] + arr[r] == target) {
                    ans.push_back({arr[i],arr[l],arr[r]});
                    l++;
                    r--;
                    while(l<r && arr[l] == arr[l-1]) l++;
                    while(l<r && arr[r] == arr[r+1]) r--;
                } else if (sum > target) {
                    r--;
                } else {
                    l++;
                }
            }
        }
        return ans;
        
    }
};

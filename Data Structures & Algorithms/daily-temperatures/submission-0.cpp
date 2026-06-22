class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        vector<int> ans(arr.size(),0);

        for(int i =0;i<arr.size();i++) {
            for(int j = i+1;j<arr.size();j++) {
                if (arr[i] < arr[j]) {
                    ans[i] = j-i;
                    break;
                } else {
                    ans[i] = 0;
                }
            }
        }
    return ans;
    }

};

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        vector<int> ans(arr.size(),0);
        stack<pair<int, int>> s;  // i, idx

        for(int i =0;i<arr.size();i++) {
            int t = arr[i];
            while(!s.empty() && s.top().first < t) {
                pair p = s.top();
                s.pop();
                ans[p.second] = i - p.second;
            }
            s.push({t,i});
        }
        return ans;
    }

};

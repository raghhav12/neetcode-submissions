class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, double>> arr;
        for(int i = 0;i<position.size();i++) {
            int d = target - position[i];
            double t = (double) d / speed[i];
            arr.push_back({d,t});
        }
        sort(arr.begin(), arr.end());

        int ans = 0;
        double currtime = 0;
        for (auto p: arr) {
            if (p.second > currtime) {
                ans += 1;
                currtime = p.second;
            }
        }
        return ans;    }
};

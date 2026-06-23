class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,double>> p;
       for(int i =0 ;i<position.size();i++) {
            double time = (double) (target - position[i]) /speed[i];
            int dist = target - position[i];
            p.push_back({dist,time});
       }
       sort(p.begin(),p.end());
       
       double currTime = 0;
       int ans = 0;

       for(int i = 0 ;i<p.size();i++) {
        if(p[i].second > currTime) {
            ans++;
            currTime = p[i].second;
        }
    }
    return ans;
    }
};

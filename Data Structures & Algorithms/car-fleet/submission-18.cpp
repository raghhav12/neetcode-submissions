class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,double>> p;
       for(int i =0 ;i<position.size();i++) {
            double time = (double) (target - position[i]) /speed[i];
            p.push_back({position[i],time});
       }
       sort(p.begin(),p.end());
       
       double currTime = 0;
       int ans = 0;

       for(int i = p.size() -1 ;i>=0;i--) {
        if(p[i].second > currTime) {
            ans++;
            currTime = p[i].second;
        }
    }
    return ans;
    }
};

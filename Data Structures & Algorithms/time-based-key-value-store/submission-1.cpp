class TimeMap {
private: 
    unordered_map<string, vector<pair<string, int>>> mp;

public:
    TimeMap() {
        
    }
    
    void set(string key, string value, int time) {
        mp[key].push_back({value, time});
    }
    
    string get(string key, int timestamp) {
        string ans = "";
        int h = -1;
        if (!vSize(mp[key])) return "";

        for (auto p: mp[key]) {
            if (p.second <= timestamp) {
                h = p.second;
                ans = p.first;
            }
        }
        return ans;
    }

    int vSize(vector<pair<string, int>> v) {
        return v.size();
    }
};

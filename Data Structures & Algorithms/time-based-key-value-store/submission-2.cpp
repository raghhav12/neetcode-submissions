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
        if (!vSize(mp[key])) return "";

        int l = 0, h = vSize(mp[key]) - 1;
        while (l <= h) {
            int mid = l + (h-l)/2;
            if (mp[key][mid].second <= timestamp) {
                ans = mp[key][mid].first;
                l = mid + 1;
            } else {
                h = mid - 1;
            }
        }
        return ans;
    }

    int vSize(vector<pair<string, int>> v) {
        return v.size();
    }
};

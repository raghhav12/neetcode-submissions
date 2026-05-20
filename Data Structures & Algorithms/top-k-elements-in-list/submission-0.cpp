class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<vector<int>> freq(nums.size() + 1,vector<int>(0,0));
        unordered_map<int,int> maps;
        vector<int> ans;

        for (int i =0;i<nums.size();i++) {
            maps[nums[i]]++;
        }

        for(auto m: maps) {
            freq[m.second].push_back(m.first);
        } 
        int n = freq.size() - 1;
        for(int i = n;i>=0;i--) {
            for(int j = 0;j<freq[i].size();j++) {
                if(ans.size() == k) return ans;
                ans.push_back(freq[i][j]);
            }
        }

        return ans;
    }
};


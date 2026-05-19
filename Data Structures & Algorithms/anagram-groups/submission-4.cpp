class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<vector<int>, vector<string>> mp;

        for(int i = 0;i<strs.size();i++) {
            vector<int> arr(26,0);

            for(int j = 0;j<strs[i].size();j++) {
                arr[strs[i][j]-'a']++;
            }
            mp[arr].push_back(strs[i]);
        }

        for(auto& kv: mp) {
            ans.push_back(kv.second);
        }
        return ans;

    }
};


/** Used hashmap<vector, vector> where vector 1 will be the char frequency counter of size 26 of each string in given strs,
used it because all the valid anagrams are gonna have the same char frequency vector so it can acts as a key for all those strings,

keep adding the strings corresponding to their char freq. vector in map,

at last insert all the values(vector<string>) into the ans vector and return it. **/



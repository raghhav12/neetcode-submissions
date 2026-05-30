class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        set<int> s;
        for(int i: nums) {
            s.insert(i);
        }
        int currlen = 1;
        int maxlen = 1;

        auto curr = s.begin();
        auto nex = next(s.begin());

        while (nex != s.end()) {
            if(*nex == *curr + 1) {
                currlen++;
                maxlen = max(maxlen,currlen);
            } else {
                currlen = 1;
            }
            curr++;
            nex++;
        }

        return maxlen;
    }
};

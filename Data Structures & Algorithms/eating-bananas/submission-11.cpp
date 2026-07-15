class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int t) {
        int l = 1;
        int h = *max_element(piles.begin(),piles.end());
        int ans = 0;

        while (l<=h) {
            int c = 0;
            int currspeed = l + (h-l) / 2;
            for(int i: piles) {
                c += (i + currspeed - 1) / currspeed;
            }
            if (c <= t) {
                ans = currspeed;
                h = currspeed - 1;
            } else {
                l = currspeed + 1;
            }
        }
        return ans;
    }
};

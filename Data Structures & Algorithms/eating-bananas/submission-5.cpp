class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int t) {
        int ans = 0, n = piles.size();
        int l = 1;
        int h = *max_element(piles.begin(),piles.end());

        while(l<=h) {
            int count = 0;
            int currSpeed = l + (h-l)/2;
            for(int i =0;i<n;i++) {
                int bananas = piles[i];
                count += (bananas + currSpeed - 1) / currSpeed;
            }

            if (count <= t) {
             ans = currSpeed;
             h = currSpeed - 1; 
            } else {
                l = currSpeed + 1;
            }
        }
        return ans;
    }
};

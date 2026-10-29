class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int t) {
        int l = 1;
        int h = *max_element(piles.begin(), piles.end());

        while (l < h) {
            int mid = l + (h - l) / 2;
            long long hours = 0;

            for (int pile : piles) {
                hours += (pile + mid - 1LL) / mid;

                if (hours > t) {
                    break;
                }
            }

            if (hours <= t) {
                h = mid;
            } else {
                l = mid + 1;
            }
        }

        return l;
    }
};
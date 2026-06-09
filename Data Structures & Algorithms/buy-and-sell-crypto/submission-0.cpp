class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n = arr.size();
        if (n == 0) return 0;

        int currbuy = arr[0];
        int maxprofit = 0;

        for(int i = 1;i<n;i++) {
            if (arr[i] < currbuy) {
                currbuy = arr[i];
            } else {
                maxprofit = max(maxprofit, arr[i] - currbuy);
            }
        }
        return maxprofit >=0 ? maxprofit : 0;
    }
};

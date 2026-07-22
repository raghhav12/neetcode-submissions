class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int n = arr.size();
        vector<int> ps(n, -1), ns(n, -1);
        stack<int> s;
        int ans = INT_MIN;

        for(int i = 0;i < n;i++) {
            while (!s.empty() && arr[s.top()] >= arr[i]) {
                s.pop();
            }
            int prev = s.empty() ? -1 : s.top();
            ps[i] = prev;
            s.push(i);
        }

        while (!s.empty()) {
            s.pop();
        }

        for(int i = n-1;i >= 0;i--) {
            while (!s.empty() && arr[s.top()] >= arr[i]) {
                s.pop();
            }
            int prev = s.empty() ? n : s.top();
            ns[i] = prev;
            s.push(i);
        }

        for (int i = 0;i < n;i++) {
            int w = ns[i] - ps[i] - 1;
            int h = arr[i];
            ans = max(ans, w * h);
        }
        return ans;
    }
};

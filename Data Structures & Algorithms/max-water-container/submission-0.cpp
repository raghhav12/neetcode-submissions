class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans = INT_MIN, n = heights.size();
        int s = 0, e = n-1;
        int c = 0;

        while(s<e) {
            int h = min(heights[s],heights[e]);
            int w = abs(e-s);
            int a = h*w;
            ans = max(ans,a);
            cout << " pass" << c++ << " area = "<< a <<" h= " << h<<" w= "<<w;
            if (heights[s]< heights[e]) {
                s++;
            } else {
                e--;
            }
        }
        return ans;
    }
};

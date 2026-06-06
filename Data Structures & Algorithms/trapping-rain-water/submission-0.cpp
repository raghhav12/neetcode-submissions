class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> pre(n);
        pre[0] = 0;
        int maxpre = height[0];
        for(int i=1;i<n;i++) {
            pre[i] = max(pre[i-1],maxpre);
            maxpre = max(maxpre,height[i]);
        }
        vector<int> post(n);
        post[n-1] = 0;
        int maxpost = height[n-1];
        for(int j = n-2;j>=0;j--) {
            post[j] = max(maxpost,post[j+1]);
            maxpost = max(maxpost,height[j]);
        }

        int ans = 0;
        for(int i = 0;i<n;i++) {
            int maxHeight = min(pre[i],post[i]) - height[i];
            if(maxHeight > 0) ans+=maxHeight;
        }
        return ans;
    }
};

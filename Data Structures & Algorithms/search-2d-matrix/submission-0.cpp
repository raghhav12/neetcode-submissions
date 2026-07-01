class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int t) {
        int n = arr.size();

        for(int i = 0;i<n;i++) {
            int m = arr[i].size();
            int l = 0, h = m-1;
            if (t > arr[i][h]) continue;
            else {
                while(l <= h) {
                    int mid = l + ((h-l)/2);
                    if(arr[i][mid] == t) {
                        return true;
                    } else if (arr[i][mid] > t) {
                        h = mid - 1;
                    } else {
                        l = mid + 1;
                    }
                }
            }
        }
        return false;
    }
};

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int t) {
        int row = arr.size(), cols = arr[0].size();
        int l = 0, h = row*cols -1;
        
        while (l<=h) {
            int mid = l + ((h-l)/2);
            int r = mid/cols;
            int c = mid%cols;

            if (arr[r][c] == t) return true;
            
            if (arr[r][c] < t) {
                l = mid + 1;
            } else {
                h = mid - 1;
            }
        }
        return false;
    }
};

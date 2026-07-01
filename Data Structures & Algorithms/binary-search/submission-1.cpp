class Solution {
public:
    int search(vector<int>& arr, int t) {
        int l = 0, h = arr.size() -1;

        while (l<=h) {
            int mid = l + ((h-l)/2);
            if (arr[mid] > t) {
                h = mid - 1;
            } else if (arr[mid] < t) {
                l = mid + 1;
            } else {
                return mid;
            }
        }
        return -1;
    }
};

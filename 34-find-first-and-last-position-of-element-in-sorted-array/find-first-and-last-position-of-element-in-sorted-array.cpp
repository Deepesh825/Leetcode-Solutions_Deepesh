class Solution {
public:
    int firstOcc(vector<int> arr, int n, int key) {
        int s = 0, e = n - 1;
        int mid = s + (e - s) / 2;
        int ans = -1;

        while (s <= e) {
            if (arr[mid] == key) {
                ans = mid;
                e = mid - 1;
            } else if (arr[mid] < key) {
                s = mid + 1;
            } else if (arr[mid] > key) {
                e = mid - 1;
            }

            mid = s + (e - s) / 2;
        }
        return ans;
    }

    int lastOcc(vector<int> arr, int n, int key) {
        int s = 0, e = n - 1;
        int mid = s + (e - s) / 2;
        int ans = -1;

        while (s <= e) {
            if (arr[mid] == key) {
                ans = mid;
                s = mid + 1;
            } else if (arr[mid] < key) {
                s = mid + 1;
            } else if (arr[mid] > key) {
                e = mid - 1;
            }

            mid = s + (e - s) / 2;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int n = (firstOcc(nums, nums.size(), target));
        int m = (lastOcc(nums, nums.size(), target));
        ans.push_back(n);
        ans.push_back(m);

        return ans;
    }
};
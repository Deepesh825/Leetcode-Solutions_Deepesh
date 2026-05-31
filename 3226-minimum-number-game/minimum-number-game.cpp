class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> arr;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i+=2) {
            swap(nums[i],nums[i+1]);
            arr.push_back(nums[i]);
            arr.push_back(nums[i+1]);
        }
        return arr;
    }
};
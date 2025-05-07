class Solution {
    int lower_b(int target, vector<int>& nums) {
        int l = 0;
        int r = nums.size();
        while (l < r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] < target) {
                l = mid + 1;
            } else {
                r = mid;
            }
        }
        return l;
    }

public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = lower_b(target, nums);
        int second = lower_b(target + 1, nums) - 1;
        
        if (first < nums.size() && nums[first] == target) {
            return {first, second};
        } else {
            return {-1, -1};
        }
    }
};
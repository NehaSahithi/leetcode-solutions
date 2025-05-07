// Last updated: 5/7/2025, 10:35:49 AM
bool canSplit(const vector<int>& nums, int k, int maxSum) {
    int sum = 0;
    int splits = 1; 
    for (int num : nums) {
        if (sum + num > maxSum) {
            sum = num;
            splits++;
            if (splits > k) return false;
        } else {
            sum += num;
        }
    }
    return true;
}

class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int left = *max_element(nums.begin(), nums.end());
    int right = accumulate(nums.begin(), nums.end(), 0);
    
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (canSplit(nums, k, mid)) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    return left;
}
    
};
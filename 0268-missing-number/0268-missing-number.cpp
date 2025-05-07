class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        long long expected_sum = static_cast<long long>(n) * (n + 1) / 2;
        long long actual_sum = std::accumulate(nums.begin(), nums.end(), 0LL);
        return static_cast<int>(expected_sum - actual_sum);
    }
};
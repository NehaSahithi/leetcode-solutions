// Last updated: 5/7/2025, 9:58:09 AM
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int neg =upper_bound(nums.begin(),nums.end(),-1)-nums.begin();
	int pos=nums.end()-upper_bound(nums.begin(),nums.end(),0);
	return max(neg,pos);
    }
};
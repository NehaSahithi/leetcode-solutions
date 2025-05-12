// Last updated: 5/12/2025, 10:42:40 AM
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (nums.empty())return false;
        int i = 0;
        for (int j=1;j<n;j++){
            if (nums[i]!=nums[j]){
                i++;
                nums[i]=nums[j];
            }
        }return i+1;
    }
};
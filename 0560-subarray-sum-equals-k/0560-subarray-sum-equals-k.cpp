class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map <int,int> hmap;
        int sum=0;
        int ans=0;
        hmap[0]=1;
        for (int i=0;i<nums.size();i++){
            sum +=nums[i];
            ans +=hmap[sum-k];
            hmap[sum]++;
        }
        return ans;
    }
};
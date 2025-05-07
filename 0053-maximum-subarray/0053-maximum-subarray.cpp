class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr_sum =0;
        int max_sum=nums[0];
        int n= nums.size();
        if (n>1)
        for (int i=0;i<n;i++){
            curr_sum += nums[i];
             max_sum=max(curr_sum,max_sum);
            if (curr_sum <0){
                curr_sum =0;
            }
       
        }
        return max_sum;
    }
};
class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>s;
        int sum =0;
        s[0]=-1;
        for (int i=0;i<nums.size();i++){
            sum += nums[i];
            int mod =sum%k;
            if (s.find(mod)!=s.end()){
                if(i-s[mod]>=2)
                return true;
            }
            else
            s[mod]=i;
        
        }
     return false;}
   
};
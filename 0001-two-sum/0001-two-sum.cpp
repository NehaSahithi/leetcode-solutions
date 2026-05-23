class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //hashmap stores numbers and their indices
        unordered_map<int,int> seen;
        //Iterate through array 
        for (int i = 0; i < (int)nums.size(); i++) {
            //calculate the complement of current number
            int complement = target - nums[i];
            //Check if complement is already in map 
            if (seen.count(complement)){
                //if found , return indices of complement nad current number
                return {seen[complement], i};
            }
            //otherwise add the current number and its index to map
            seen[nums[i]] = i;
        }
        return {};
    }
    
};
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int>hmap;
        for (int i=0;i<numbers.size();i++){
            int num =numbers[i];
            if (hmap.find(target-num)!=hmap.end()){
                return {hmap[target-num]+1,i+1};
            }
            hmap[num]=i;
        }
        return {-1,-1};
    }
    
    
};
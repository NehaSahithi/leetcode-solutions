class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) { 
    stack <int> s;
    unordered_map <int,int> hmap;
    for (int i=0;i<nums2.size();i++){
        while (!s.empty() && s.top()<nums2[i]){
            hmap[s.top()] =nums2[i];
            s.pop();
        }
        s.push(nums2[i]);
    }
    while (!s.empty()){
        hmap[s.top()]=-1;
        s.pop();
    }
    vector <int>ans;
    for (auto i:nums1){
        ans.push_back(hmap[i]);
    }

    return ans;

    }
};
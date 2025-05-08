// Last updated: 5/8/2025, 11:20:05 AM
class Solution {
public:
    bool isAnagram(string s, string t) {
       if (s.size()!= t.size()){
        return false;
       } 
       else {
        sort (s.begin(),s.end());
        sort (t.begin(),t.end());
       return s==t;
       }
    }
};
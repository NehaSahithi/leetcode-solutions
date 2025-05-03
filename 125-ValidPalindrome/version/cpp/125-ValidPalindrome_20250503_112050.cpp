// Last updated: 5/3/2025, 11:20:50 AM
class Solution {
    string removeAlpha(string s){
        string result="";
        for (char c: s){
        if (isalnum(c)){
            result+=tolower(c);
        }}
        return result;
    }
public:
    bool isPalindrome(string s) {
       string result= removeAlpha(s);
       string rever = result;
       reverse(rever.begin(),rever.end());
         return result == rever;
    }
};
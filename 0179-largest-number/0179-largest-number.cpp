bool well(string a, string b){
	return a+b>b+a;
}
class Solution {
public:
    string largestNumber(vector<int>& nums) {
       vector <string> he;
       for(int nu:nums){
		he.push_back(to_string(nu));
	}
	sort(he.begin(), he.end(), well);
	string result = "";
    for (const string& str : he) {
        result += str;
    }
    if (result[0] == '0' && all_of(result.begin(), result.end(), [](char c){ return c == '0'; })) {
    return "0";
}
	return result; 
    }
};
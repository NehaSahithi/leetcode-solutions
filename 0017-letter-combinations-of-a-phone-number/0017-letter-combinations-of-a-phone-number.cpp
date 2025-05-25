class Solution {
public:
  
    void allCombi(int i,string& cur,string& digits,vector<string>&ans,map<char,string>&mp){
        //cout<<i<<" "<<cur<<"\n";
        if(i == digits.size()){
            ans.push_back(cur);
            return;
        }
        //2 - "abc"
        /* "df"
        '2' - "abc"
        df + a -> "dfa"
        df + b -> dfb */

        //mp[ 3 ] 
        for(auto& x : mp[digits[i]]){
            cur += x;
            allCombi(i+1,cur,digits,ans,mp);
            cur.pop_back();
        }

    }
   
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits.size() == 0)return ans;
        map<char,string>mp;
        mp['2'] ="abc";
        mp['3'] ="def";
        mp['4'] ="ghi";
        mp['5'] ="jkl";
        mp['6'] ="mno";
        mp['7'] ="pqrs";
        mp['8'] ="tuv";
        mp['9'] = "wxyz";   

        string cur =""; 
        allCombi(0,cur,digits,ans,mp);
        return ans;

    }
};
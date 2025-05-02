
class Solution {
public:
    bool isValid(string s) {
        stack <char> p;
        for (char c:s){
             if (c == '(' || c == '{' || c == '['){
                p.push(c);
             }
             else{
                if (p.empty()) return false;
                if (c == ')' && p.top() != '(') return false;
                if (c == '}' && p.top() != '{') return false;
                if (c == ']' && p.top() != '[') return false;
                p.pop();
             }
        }   return p.empty();
    }
    
};
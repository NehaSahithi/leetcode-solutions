class Solution {
public:
    int maxVowels(string s, int k) {
        int m=INT_MIN;
	int a=0;
	for(int i=0;i<k;i++){
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
			a++;
		}
	}
	m=a;
	for (int i=k;i<s.size();i++){
		if (s[i - k] == 'a' || s[i - k] == 'e' || s[i - k] == 'i' || s[i - k] == 'o' || s[i - k] == 'u') {
			a--;
	}
	if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
			a++;
		}
	m=max(m,a);
	}
	return m;
    }
};
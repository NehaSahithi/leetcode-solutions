// Last updated: 5/7/2025, 11:23:23 AM
typedef long long ll;
class Solution {
public:
    long long minimumPerimeter(long long neededApples) {
        ll l=0,h=100000;
	while(l<h){
		ll mid = l+(h-l)/2;
		ll a=2 * mid * (mid + 1) * (2 * mid + 1);
		if (a<neededApples){
			l=mid+1;
		}else
		h =mid; 

	} return 8*l;
    }
};
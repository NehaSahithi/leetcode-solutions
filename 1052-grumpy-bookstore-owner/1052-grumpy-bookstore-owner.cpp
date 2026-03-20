class Solution {
public:
    int maxSatisfied(vector<int>& cus, vector<int>& mood, int k) {
        int ans = 0;
        int n = cus.size();
        for(int i=0;i<n;++i){
            if(mood[i] == 0)ans += cus[i];
        }

        int mx_new = 0;
        int cur_new = 0;
        for(int i=0;i<k;++i){
            if(mood[i] == 1)cur_new += cus[i];
        }
        mx_new = cur_new;

        for(int i=k;i<n;++i){
            if(mood[i] == 1)cur_new += cus[i];
            if(mood[i-k] == 1)cur_new -= cus[i-k];
            mx_new = max(mx_new,cur_new);
        }

       ans += mx_new;
        return ans;
    }
};
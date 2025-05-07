// Last updated: 5/7/2025, 10:52:33 AM
class Solution {
public:
long long divd(vector<int> &nums,int x){
  long long sum=0;
    if (x>0){
    for(int i=0;i<nums.size();i++){
        long long div=((nums[i]+x-1)/x);
        sum+=div;
    }
    }
    return sum;
}
    int minEatingSpeed(vector<int>& a, int H) {
    sort(a.begin(),a.end());
    int s=1;
    long long e=*max_element(a.begin(),a.end());
    long long res=e;
    while(s<=e){
        int m=(s+e)/2;
        long long z =divd(a,m);
        if(z<=H){
            res=m;
            e=m-1;
        }
        else{
            s=m+1;
        }
    }
    
    return res;
}
};
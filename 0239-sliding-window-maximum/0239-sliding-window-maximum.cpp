class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
       
       //priority queue -> max heap -> max value will be at the top
       //remove the top most element
       priority_queue<pair<int,int>>pq;
       int n = nums.size();
       for(int i=0;i<k;++i){
         pq.push({nums[i],i});
       }
       pair<int,int>temp = pq.top();
       vector<int>ans;
       ans.push_back(temp.first);
       //0,1,2,3,4,5,6
       //6,7,3,4,5,2,8
       //k = 3
       //{{7,1},{6,0},{3,2}}
       //{{7,1},{6,0},{4,3},{3,2}}
       //{{5,4},{4,3},{3,2}}
       for(int i=k;i<n;++i){
          pq.push({nums[i],i});

          int start = (i-k)+1;
          while(1){
            pair<int,int>temp = pq.top();
            if(temp.second < start){
                pq.pop();
            }
            else {
                ans.push_back(temp.first);
                break;
            }
          }

       }
       return ans;


    }
};
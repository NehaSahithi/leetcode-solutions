class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
       unordered_map<int,int> map;
       for (int i=0;i<arr2.size();i++){
        map[arr2[i]]=i;
       }  
       sort(arr1.begin(),arr1.end(),[&map](int a,int b){
        bool aInArr2 = map.count(a);
        bool bInArr2 = map.count(b);
        if (aInArr2 && bInArr2){ return map[a]<map[b];}
        else if (aInArr2) return true;
        else if (bInArr2) return false;
        else return a<b;
        
       });
       return arr1;
    }
};
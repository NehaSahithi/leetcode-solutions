// Last updated: 5/7/2025, 11:33:36 AM
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
        for (int i=0;i<stones.size();i++){
		for (int k=0;k<jewels.size();k++){
			if(stones[i]==jewels[k]){
				count++;
            }}}
return count;
   }
};
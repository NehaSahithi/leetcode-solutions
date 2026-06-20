class Solution {
    public boolean containsNearbyDuplicate(int[] nums, int k) {
      Set <Integer> numbers = new HashSet<>();
      //sliding window
      for (int i = 0; i < nums.length; ++i){
        if (numbers.contains(nums[i])) return true;
        numbers.add(nums[i]);
        if (numbers.size()>k){
            numbers.remove(nums[i-k]);
        }
      }
      return false;
    }
}
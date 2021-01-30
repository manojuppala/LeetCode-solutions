class Solution {
    public int[] searchRange(int[] nums, int target) {
        int sol[] = { 0, 0 };
        boolean key = false;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] == target && key == false) {
                sol[0] = i;
                key = true;
            } else if (nums[i] != target && key == true) {
                sol[1] = i - 1;
            }
        }
        return sol;
    }
}
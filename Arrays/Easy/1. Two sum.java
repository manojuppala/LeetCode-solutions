import java.util.ArrayList;

class Solution {
    public int[] twoSum(int[] nums, int target) {
        int[] sol = new int[2];
        for (int j = 0; j < nums.length; j++) {
            for (int i = 0; i < nums.length; i++) {
                if (j != i) {
                    if (nums[i] + nums[j] == target) {
                        sol[0] = i;
                        sol[1] = j;
                    }
                } else
                    continue;
            }
        }
        return sol;
    }
}
import static java.lang.Integer.valueOf;

class Solution {
    public int removeDuplicates(int[] nums) {
        Set<Integer> hset = new HashSet<Integer>();
        for (int i : nums) {
            hset.add(valueOf(i));
        }

        List<Integer> arr = new ArrayList<Integer>(hset);
        Collections.sort(arr);
        for (int i = 0; i < arr.size(); i++) {
            nums[i] = arr.get(i);
        }

        return arr.size();
    }
}
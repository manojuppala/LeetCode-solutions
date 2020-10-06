import java.util.*;
import static java.lang.Integer.valueOf;

class Solution {
    public int maxProfit(int[] prices) {
        List<Integer> arr = new ArrayList<Integer>();
        for (int i = 0; i < prices.length; i++)
            arr.add(valueOf(prices[i]));
        List<Integer> arr1 = new ArrayList<Integer>();
        for (int i = 0; i < prices.length; i++)
            arr1.add(valueOf(prices[i]));
        Collections.sort(arr);
        int min = arr.get(0);
        int max = arr.get(prices.length - 1);

        if (arr1.get(arr1.size() - 1) == min)
            return 0;
        else {
            max = min;
            for (int i = arr1.indexOf(min) + 1; i < arr1.size(); i++) {
                if (max < arr1.get(i))
                    max = arr1.get(i);
            }
        }
        return (max - min);
    }
}
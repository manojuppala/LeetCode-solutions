class Solution
{
public:
    //Kadane's algorithm O(n)
    int maxSubArray(vector<int> &nums)
    {

        int max_all = INT_MIN, max = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            max = max + nums[i];
            if (max < nums[i])
                max = nums[i];
            if (max > max_all)
                max_all = max;
        }
        return max_all;
    }
};
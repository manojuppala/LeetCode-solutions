#include <bits/stdc++.h>
class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int temp = 0;
        int n = nums.size();
        while (k != 0)
        {
            temp = nums[n - 1];
            nums.insert(nums.begin(), temp);
            nums.pop_back();
            k--;
        }
    }
};
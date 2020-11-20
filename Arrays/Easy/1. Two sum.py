class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        check=dict()
        for i in range(len(nums)):
            complement=target-nums[i]
            if(nums[i] in check.keys()):
                return([check[nums[i]],i])
            else:
                check[complement]=i
class Solution:
    def maxAscendingSum(self, nums: List[int]) -> int:
        mx = nums[0]
        cp = nums[0]
        for i in range(len(nums) - 1):
            if nums[i] < nums[i + 1]:
                mx += nums[i + 1]
            else:
                mx = nums[i + 1]
            cp = max(cp, mx)
        return cp
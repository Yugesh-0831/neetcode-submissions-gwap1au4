class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        prod = 1
        zeroCount = 0
        for num in nums:
            if num == 0: 
                zeroCount+=1
                continue
            prod *= num
        ans = []
        for num in nums:
            if zeroCount > 1:
                ans.append(0)
                continue;
            elif zeroCount == 1:
                if num == 0:
                    ans.append(prod)
                else: ans.append(0)
            else:    
                ans.append(int(prod/num))
        return ans
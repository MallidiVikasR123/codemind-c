class Solution:
    def applyOperations(self, nums: List[int]) -> List[int]:
        for i in range(len(nums)-1):
            if(nums[i]==nums[i+1]):
                nums[i]*=2
                nums[i+1]=0
        i = 0
        j = 0
        while(i<len(nums) and j<len(nums)):
            if(nums[i]!=0):
                i+=1
            elif(nums[j]==0):
                j+=1
            elif(nums[i]==0 and nums[j]!=0 and i>=j):
                j+=1
            else:
                nums[i],nums[j]=nums[j],nums[i]
                
        return nums
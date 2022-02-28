def two_sum(nums, target):
    for i,num in enumerate(nums):
        for i2 in range(i+1,len(nums)):
            if num + nums[i2] == target:
                return [i,i2]
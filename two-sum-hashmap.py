
def twoSum(nums,target):
    hashmap = {}
    for i in range(len(nums)):
        if target - nums[i] in hashmap:
            return [hashmap[target-nums[i]],i]
        else:
            hashmap[nums[i]] = i
    return hashmap

print(twoSum([3,3,3,3],6))

import math
def good_food(nums):
    powers_2 = [2**i for i in range(0,22)]
    count = 0

    for i in range(len(nums)):
        for j in range(i,len(nums)):
            if (nums[i]+nums[j]) in powers_2 and i != j:
                count += 1
    return count % (10**9+7)

test = [1,1,1,3,3,3,7]
print(good_food(test))
#include <vector>
#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <cmath>

/*
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

A subarray is a contiguous part of an array.

ex.

input = nums[-2,1,-3,4,-1,2,1,-5,4]
output = 6
[4,-1,2,1] has the largest sum.

Solution: Kadane's algorithm
-----> Look at each individual element in the vector and create a "rolling sum". You start with the first element, -2, that is your rolling sum for now.
    Then we move onto the next element, 1. Since the number 1 itself is greater than your rolling sum (-2) + 1, then your new rolling sum becomes 1. This
    algorithm essentially compares two things: Is this element bigger than if I added it to my rolling sum? Then it simply chooses the option that yields
    a larger rolling sum. Evidently, when nums[i] > nums[i] + sum, the rolling sum gets reset.

*/

class Solution {
    public:
        int maxSubArray(std::vector<int>& nums) {
            int sum = nums[0];
            int rollingSum = nums[0];
            for(unsigned int i = 1; i < nums.size(); i++) {
                rollingSum = (nums[i] > nums[i] + rollingSum) ? nums[i] : (nums[i] + rollingSum);
                if(rollingSum > sum) {
                    sum = rollingSum;
                }
            }
            return sum;
        }
};


int main() {
    Solution mySolution;

    std::vector<int> nums{1};
    std::cout << mySolution.maxSubArray(nums) << std::endl;
    return 0;
}



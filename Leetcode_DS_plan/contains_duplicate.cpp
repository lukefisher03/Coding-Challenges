#include <vector>
#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>


//loop through an array and check for duplicates.


class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        sort(nums.begin(),nums.end());

        for(int i = 0; i < nums.size()-1; i++) {//loop through each number
            if (nums[i] == nums[i+1])
            {
                return true;
            }
            
        }

        return false;
    }
};

int main() {
    Solution mySolution;

    std::vector<int> vec = {1,2,3,4,5,6,7,8,9,10};
    std::cout << mySolution.containsDuplicate(vec) << std::endl;
    return 0;
}

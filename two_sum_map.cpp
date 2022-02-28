#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std; 
vector<int> twoSum(vector<int>& nums, int target) {
    map<int, int> sumPairsMap;//This takes num[i] as the key and i as the value.

    for (int i = 0; i < nums.size(); i++)
    {
        if (sumPairsMap.count(target - nums.at(i)) == 1) 
        {
            return vector<int>{sumPairsMap[target-nums.at(i)], i};
        }
        else 
        {
            sumPairsMap[nums.at(i)] = i;
        }
    }   
    return {};
}

int main() {
    /**
     * @brief Two Sum Solution
     * The idea here is to store pairs that add up to the target.
     * We use a map data structure in order to store those pairs. 
     * As we iterate through the values in the list of numbers given to us we 
     * 
     */

    vector<int> nums = {3,3};
    vector<int> indexes = twoSum(nums,6);
    cout << indexes.at(0) << "  " << indexes.at(1) << endl;
    
    return 0;
}
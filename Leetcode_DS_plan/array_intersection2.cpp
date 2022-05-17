#include <vector>
#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <unordered_map>

/*
General note about hashtables -> 
    - In a lot of cases you'll need to consider two elements that connect your data in a useful way. For example, in this
    specific problem our hashtable is populated with nums1 values as the key and then the number of occurences as the value.
    This useful connection of data creates a solution to our problem. Be constantly on the lookout for ways to "connect" information
    throughout the problem. I did not personally come up with this solution. I merely implemented it.


*/

using namespace std;

class Solution {
    public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        unordered_map<int,int> mp;
        //in unordered_map if you try to reference a map item that hasn't been declared it always returns 0. Thus you can use the ++ iterator to assign and increment elements.

        for(int num : nums1) {
            mp[num]++;
            //Set the keys of the map to the elements in num1. The value of the map item is the # of occurences.
        }

        for(int num : nums2) {
            //iterate through the second array and check instances of overlap.
            if (mp[num] > 0)
            {
                result.push_back(num);
                mp[num]--;//de-increment the # of occurences in the map.
            }
        }
        
        return result;
    }
};

int main() {
    Solution soln;
    vector<int> nums2 {4,9,9,5};
    vector<int> nums1 {9,4,9,8,4};
    vector<int> final = soln.intersect(nums1, nums2);

    for(int num : final) {
        cout << "   " << num;
    }

    return 0;
}
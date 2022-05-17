#include <vector>
#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <cmath>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0;
        int j = 0;

        while (i < m+n)
        {
            if (i < m && nums2[j] > nums1[i])
            {
                i++;
                cout << nums1[i] << "\t";
            }
            else {
                nums1.insert(nums1.begin()+i+1, nums2[j]);
                nums1.pop_back();
                i+=2;
                j++;
            }

            if (i > m)
            {
                nums1[i] = nums2[j];
                i++;
                j++;
            }
            
        }
    }
};


// [1,2,3,0,0,0]
// 6
// [2,5,6]
// 3


int main() {
    Solution soln;
    vector<int> nums1{0};
    vector<int> nums2{1};
    soln.merge(nums1, 0, nums2, 1);
    cout << endl;
    for(int val : nums1) {
        cout << val << "\t";
    }

    cout << endl;

    return 0;
}
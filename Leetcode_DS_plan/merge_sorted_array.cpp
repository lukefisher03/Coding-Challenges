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

        while (i < m || j < n){
            cout << i <<endl;
            if(nums2[j] > nums1[i]) {
                i++;
            }
            else {
                //cout << nums2[j] << endl;
                if(i < m) {
                    nums1.insert(nums1.begin()+i, 5);
                } else {
                    nums1[i] = nums2[j];
                }
                j++;
            }
        }

    }
};


// [-1,0,0,3,3,3,0,0,0]
// 6
// [1,2,2]
// 3


int main() {
    Solution soln;
    vector<int> nums1{1,2,3,0,0,0};
    vector<int> nums2{2,5,6};
    soln.merge(nums1, 3, nums2, 3);
    
    for(int val : nums1) {
        cout << val << "\t";
    }

    cout << endl;

    return 0;
}
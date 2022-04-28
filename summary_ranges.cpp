#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> summaryRanges(vector<int>& nums) {

    //For each element track the number of consecutive numbers after it.
    vector<string> ranges;
    int len = 0;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums.at(i+1) == nums.at(i) + 1) // check if the next number is +1 from the last one.
        {
            len++;
        }
        else
        {
            if (len != 0)
            {
                ranges.push_back(to_string(nums.at(i-len)) + "->" + to_string(nums.at(i)));
            }
            else
            {
                ranges.push_back(to_string(nums.at(i)));
            }
            
        }
           
    }

    return ranges;
    
}

int main() {
    vector<int> vect{ 10, 20, 30 };
    vector<string> output = summaryRanges(input);
    for (int i = 0;i < output.size();i++)
    {
        
    }
    
    return 0;
}

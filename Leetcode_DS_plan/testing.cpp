#include <vector>
#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <cmath>


using namespace std;

vector<int> vec{0,1,2,3,4,5};

int main()
{
    vec.insert(vec.begin() + 3, 10);

    for(int val : vec) {
        cout << val << "\t";
    }
}
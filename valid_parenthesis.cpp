#include <vector>
#include <map>
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;
/**
 * @brief Rules:
 * 1. Open brackets must be closed by the same type of brackets.
 * 2. Open brackets must be closed in the correct order.
 * 
 * Leetcode Challenge can be found here: https://leetcode.com/problems/valid-parentheses/
 */
//correlate the opening character with the closing character.
map<char, char> legend
{
    {'{','}'},
    {'(',')'},
    {'[',']'}
};

bool isValid(string s) 
{
    //if s is odd then we know a bracket hasn't been closed. Return false.
    if (s.length() % 2 != 0)
    {
        return false;
    }

    vector<char> stack; //initiate our stack where we'll store opening characters "(, {, ["
    bool stackIsModified = false; //We need to make sure an opening character has been added to the stack at least once.

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '{' || s[i] == '[' || s[i] == '(')//Check and see if s[i] is an opening character.
        {
            stackIsModified = true;
            stack.push_back(s[i]);
            cout << s[i] << endl;
        }
        
        else if(stack.size() != 0) //See if s[i] is a closing character.
        {
            if (legend[stack.at(stack.size() - 1)] == s[i])
            {
                stack.pop_back();
            }
            else //If s[i] is a closing character that doesn't match the corresponding opening character. Ex: "{)"
            {
                return false;
            }
        }
        else //If s[i] isn't an opening character and the stack is empty then we know there's a mismatch, return false.
        {
            return false;
        }
    }

    if (stack.size() > 0 || !stackIsModified) //Make sure the stack doesn't have remaining opening characters and that the stack has been changed at least once.
    {
        cout << stackIsModified << endl;
        return false;
    }
    
    return true;
}

int main() 
{
    cout << isValid("()))") << endl;//Random test case.
    return 0;
}
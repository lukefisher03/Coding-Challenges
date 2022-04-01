#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

string alphabet = "abcdefghijklmnopqrstuvwxyz";

//mode indicates whether or not we're decrypting or encrypting. true = encrypting; false = decrypting.
string caesar(string t, int n, bool mode) {

    cout << "Working...." << endl;

    if(mode == 0) {
        n = 26 - n;
    }

    for(int i = 0; i < t.length(); i++) {
        bool upCase;
        if(isupper(t[i])) {
            upCase = true;
            t[i] = tolower(t[i]);
        }
        else 
        {
            upCase = false;
        }
        if (count(alphabet.begin(), alphabet.end(), t[i]) == 1)
        {
            //Function for caesar cipher: (x+n)%26 -> where x = the position of the letter to encrypt. n = shift.
            int shift = (alphabet.find(t[i])+n) % 26;
            t[i] = alphabet[shift];
        }

        if(upCase) {
            t[i] = toupper(t[i]);
        }
    }

    return t;
}

int main() {
    cout << caesar("Cpggj!", -5, false) << endl;
    return 0;
}
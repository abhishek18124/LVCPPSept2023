/*

Given a phone keypad as shown below, and an n digit number, print all words which are possible by
pressing the n digits on the keypad.

 1()     2(abc) 3(def)
 4(ghi)  5(jkl) 6(mno)
 7(pqrs) 8(tuv) 9(wxyz)

*/

#include<iostream>

using namespace std;

string keypad[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void f(char inp[], string& out, int i) {

    // base case

    if (inp[i] == '\0') {
        cout << out << endl;
        return;
    }

    // recursive case

    // we've to take a sequence of n-i decisions for the inp[] digits i to n-1

    // take a decision for the ith digit i.e. inp[i]

    int di = inp[i] - '0';

    if (di == 0 || di == 1) {
        // skip the ith digit
        f(inp, out, i + 1);
        return;

    }

    string options = keypad[di];

    for (char option : options) {
        out.push_back(option);
        f(inp, out, i + 1);
        out.pop_back(); // backtracking
    }

}

int main() {

    char inp[] = "23";
    string out = "";

    f(inp, out, 0);

    return 0;
}
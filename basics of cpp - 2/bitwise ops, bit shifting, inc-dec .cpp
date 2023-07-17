#include <bits/stdc++.h>
using namespace std;

int main() {
    // bitwise operators
    bool a = true;
    bool b = false;

    // or
    cout << (a | b) << endl;
    cout << (5 | 8) << endl << endl;

    // and
    cout << (a & b) << endl;
    cout << (3 & 4) << endl << endl;

    // negation
    // In these cases, which is represented by the binary value 0
    // the unary operator ~ inverts all the bits to produce the binary value 11111111
    // which is equivalent to the decimal value -1.
    cout << (~ a) << endl;
    cout << (~ b) << endl << endl;

    // x-or
    cout << (a ^ b) << endl;
    cout << (a ^ a) << endl;
    cout << (2 ^ 4) << endl << endl;

    // left shift, x 2
    int c = 1;
    c = c << 1;
    cout << c << endl;
    // right shift, / 2
    int d = 5;
    d = d >> 1;
    cout << d << endl << endl;

    int x = 5;
    // post increment
    cout << x++ << endl;
    // pre increment
    cout << ++x << endl;
    // post decrement
    cout << x-- << endl;
    // pre decrement
    cout << --x << endl << endl;

    return 0;
}
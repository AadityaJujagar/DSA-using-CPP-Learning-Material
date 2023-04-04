#include <iostream>
#include <iomanip> // for setprecision(8)

using namespace std;

main()
{
    // int, signed and upsigned int datatype var
    int i = 4;
    cout << i << endl;

    // signed: -ve, 0, +ve numbers
    signed int si = -100;
    cout << si << endl;
    // unsigned: only +ve numbers
    unsigned int usi = 100;
    cout << usi << endl;

    // long and long long datatype vars
    // 4 bytes of memory
    long l = 4954349;
    cout << l << endl;

    // 8 bytes of memory
    long long ll = 495434954349543;
    cout << ll << endl;

    // short datatype variables
    short s = 9091;
    cout << s << endl;

    // char datatype variables
    char ch = 67;
    cout << ch << endl; // int ASCII to char o/p
    int x = 'e';
    cout << x << endl; // char to int ASCII o/p

    // boolean datatype variables
    // output will be in terms of 1 or 0
    bool b = true;
    cout << b << endl;

    // float and double datatype variables
    // numbers upto 5 will be printed
    float f = 1.232345834f;
    cout << f << endl;

    // numbers upto will be printed
    double d = 1.23234583458405945098523;
    cout << fixed << setprecision(8);
    cout << d << endl;

    // datatypes and their sizes
    cout << sizeof(int) << endl;
    cout << sizeof(char) << endl;
    cout << sizeof(float) << endl;
    cout << sizeof(bool) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(long) << endl;
    cout << sizeof(long long) << endl;
    cout << sizeof(short) << endl;
}
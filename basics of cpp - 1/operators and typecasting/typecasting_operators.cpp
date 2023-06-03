#include <iostream>
#include <typeinfo>

using namespace std;

main()
{
    // assignment operator
    int i = 39;
    char ch = '&';
    float fl = 2.34435;

    // typecasting
    cout << float(i) << endl;
    cout << char(i) << endl;

    cout << float(ch) << endl;
    cout << int(ch) << endl;

    cout << char(fl) << endl;
    cout << int(fl) << endl
         << endl;

    // operators
    // arithmatic
    int a = 5, b = 7;
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl
         << endl;

    // relational
    int e = 4, f = 2;
    cout << (e > f) << endl;
    cout << (e < f) << endl;
    cout << (e == f) << endl;
    cout << (e <= f) << endl;
    cout << (e >= f) << endl
         << endl;

    // logical
    int x, y;
    cin >> x >> y;
    cout << (x > 0 && y > 0) << endl;
    cout << (x > 0 || y > 0) << endl;
    cout << !(x != 0 && y != 0) << endl;
}
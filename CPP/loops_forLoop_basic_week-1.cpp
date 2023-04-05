#include <iostream>

using namespace std;

main()
{
    // simple for loop
    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << endl;
    }
    cout << endl;

    // doubling the numbers using for loop
    for (int j = 1; j <= 10; j *= 2)
    {
        cout << j << endl;
    }
    cout << endl;

    // table of n using for loop
    int k, m;
    cin >> m;
    for (int k = 1; k <= 10; k++)
    {
        cout << m * k << endl;
    }
    cout << endl;

    // without conditions and initialization in for loop
    int l = 1, n;
    cin >> n;
    for (;;)
    {
        if (l <= 10)
        {
            cout << n * l << endl;
            l++;
        }
    }
    cout << endl;
}

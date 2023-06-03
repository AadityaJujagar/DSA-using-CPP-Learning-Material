#include <iostream>

using namespace std;

main()
{
    // simple 5 x 5 pattern
    int i, j;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // user-input-size of pattern
    int k, l, n;
    cout << "enter the size of the matrix to be formed: ";
    cin >> n;
    for (int k = 0; k < n; k++)
    {
        for (int l = 0; l < n; l++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // hollow square 6 x 6 pattern
    int a, b;
    for (int a = 0; a < 6; a++)
    {
        for (int b = 0; b < 6; b++)
        {
            if (a == 0 || b == 0 || b == 5 || a == 5)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    // hollow square but with user defined scale
    int c, d, m;
    cout << "enter the scale number of which the hollow square you wanna print: ";
    cin >> m;
    for (int c = 0; c < m; c++)
    {
        for (int d = 0; d < m; d++)
        {
            if (c == 0 || d == 0 || d == m - 1 || c == m - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    // right angled triangle, 4 x 4
    int i1, i2;
    for (int i1 = 0; i1 < 4; i1++)
    {
        for (int i2 = 0; i2 < i1 + 1; i2++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // user defined scale right triangle
    int i3, i4, x;
    cout << "triangle of scale: ";
    cin >> x;
    for (int i3 = 0; i3 < x; i3++)
    {
        for (int i4 = 0; i4 < i3 + 1; i4++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // right angled triangle but upside-down, 7 x 7
    int j1, j2;
    for (int j1 = 0; j1 < 7; j1++)
    {
        for (int j2 = 7; j2 > j1; j2--)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // user defined scale right-reverse triangle
    int j3, j4, y;
    cout << "scale of reverse triangle: ";
    cin >> y;
    for (int j3 = 0; j3 < y; j3++)
    {
        for (int j4 = y; j4 > j3; j4--)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // half hollow pyramid, 7 x 7
    int e, f;
    cout << "*";
    cout << "* *";
    for (int e = 3; e < 7; e++)
    {
        for (int f = 0; f < 7; f++)
        {
            if (f == 0 || f == e + 3)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << "* * * * * * *";
}
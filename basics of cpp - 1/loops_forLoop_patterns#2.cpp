#include <bits/stdc++.h>
using namespace std;

int main() {
    // full solid pyramid alternative, 6 x 6
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6 - i - 1; j++)
        {
            cout << "` ";
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "* ";
        }
        for (int l = 0; l < 6 - i - 1; l++)
        {
            cout << "` ";
        }
        cout << endl;
    }

    // full solid pyramid alternative, custom scale
    int n;
    cout << "enter the scale value: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "` ";
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "* ";
        }
        for (int l = 0; l < n - i - 1; l++)
        {
            cout << "` ";
        }
        cout << endl;
    }
    cout << endl;

    // inverted solid full pyramid, 7 x 7
    for (int i = 0; i < 7; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout << "` ";
        }
        for (int j = 0; j < 2 * 7 - 2 * i - 1; j++)
        {
            cout << "* ";
        }
        for (int k = 0; k < i; k++)
        {
            cout << "` ";
        }
        cout << endl;
    }

    // inverted solid full pyramid, custom scale
    int nn;
    cout << "enter the scale value: ";
    cin >> nn;
    for (int i = 0; i < nn; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout << "` ";
        }
        for (int j = 0; j < 2 * (nn - i) - 1; j++)
        {
            cout << "* ";
        }
        for (int k = 0; k < i; k++)
        {
            cout << "` ";
        }
        cout << endl;
    }
    cout << endl;

    // inverted hollow pyramid, 5 x 5
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "` ";
        }
        for (int k = 0; k < 2 * (5 - i) - 1; k++)
        {
            if (i == 0 || i == 5 - 1 || k == 0 || k == 2 * (5 - i) - 2)
            {
                cout << "* ";
            }
            else {
                cout << "` ";
            }
        }
        for (int l = 0; l < i; l++)
        {
            cout << "` ";
        }
        cout << endl;
    }

    // inverted hollow pyramid, custom size
    int nnn;
    cout << "enter the scale value: ";
    cin >> nnn;
    for (int i = 0; i < nnn; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "` ";
        }
        for (int k = 0; k < 2 * (nnn - i) - 1; k++)
        {
            if (i == 0 || i == nnn - 1 || k == 0 || k == 2 * (nnn - i) - 2)
            {
                cout << "* ";
            }
            else {
                cout << "` ";
            }
        }
        for (int l = 0; l < i; l++)
        {
            cout << "` ";
        }
        cout << endl;
    }
    cout << endl;

    // solid diamond, 5 x 5
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - i - 1; j++)
        {
            cout << "` ";
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "* ";
        }
        for (int l = 0; l < 5 - i - 1; l++)
        {
            cout << "` ";
        }
        cout << endl;
    }
    for (int m = 0; m < 5 - 1; m++)
    {
        for (int n = 0; n < m + 1; n++)
        {
            cout << "` ";
        }
        for (int o = 0; o < 2 * (5 - m) - 3; o++)
        {
            cout << "* ";
        }
        for (int p = 0; p < m + 1; p++)
        {
            cout << "` ";
        }
        cout << endl;
    }

    // solid diamond, custom scale
    int nx;
    cout << "enter the scale value: ";
    cin >> nx;
    for (int i = 0; i < nx; i++)
    {
        for (int j = 0; j < nx - i - 1; j++)
        {
            cout << "` ";
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "* ";
        }
        for (int l = 0; l < nx - i - 1; l++)
        {
            cout << "` ";
        }
        cout << endl;
    }
    for (int m = 0; m < nx - 1; m++)
    {
        for (int n = 0; n < m + 1; n++)
        {
            cout << "` ";
        }
        for (int o = 0; o < 2 * (nx - m) - 3; o++)
        {
            cout << "* ";
        }
        for (int p = 0; p < m + 1; p++)
        {
            cout << "` ";
        }
        cout << endl;
    }
    cout << endl;

    // hollow diamond, 5 x 5
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - i - 1; j++)
        {
            cout << "` ";
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            if (k == 0 || k == 2 * i)
            {
                cout << "* ";
            }
            else {
                cout << "` ";
            }
        }
        for (int l = 0; l < 5 - i - 1; l++)
        {
            cout << "` ";
        }
        cout << endl;
    }
    for (int m = 0; m < 5 - 1; m++)
    {
        for (int n = 0; n < m + 1; n++)
        {
            cout << "` ";
        }
        for (int o = 0; o < 2 * (5 - m) - 3; o++)
        {
            if (o == 0 || o == 2 * (5 - m) - 4)
            {
                cout << "* ";
            }
            else {
                cout << "` ";
            }
        }
        for (int p = 0; p < m + 1; p++)
        {
            cout << "` ";
        }
        cout << endl;
    }

    // hollow diamond, custom scale
    int n1;
    cout << "enter the scale value: ";
    cin >> n1;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n1 - i - 1; j++)
        {
            cout << "` ";
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            if (k == 0 || k == 2 * i)
            {
                cout << "* ";
            }
            else {
                cout << "` ";
            }
        }
        for (int l = 0; l < n1 - i - 1; l++)
        {
            cout << "` ";
        }
        cout << endl;
    }
    for (int m = 0; m < n1 - 1; m++)
    {
        for (int n = 0; n < m + 1; n++)
        {
            cout << "` ";
        }
        for (int o = 0; o < 2 * (n1 - m) - 3; o++)
        {
            if (o == 0 || o == 2 * (n1 - m) - 4)
            {
                cout << "* ";
            }
            else {
                cout << "` ";
            }
        }
        for (int p = 0; p < m + 1; p++)
        {
            cout << "` ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
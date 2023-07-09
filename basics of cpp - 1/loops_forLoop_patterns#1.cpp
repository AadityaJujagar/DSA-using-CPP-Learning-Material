#include <iostream>

using namespace std;

main()
{
    // solid square pattern, 6 x 6
    for (int i1 = 0; i1 < 6; i1++)
    {
        for (int j1 = 0; j1 < 6; j1++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
    // solid square pattern, custom scale
    int x;
    cout << "enter the scale of pattern: ";
    cin >> x;
    for (int i2 = 0; i2 < x; i2++)
    {
        for (int j2 = 0; j2 < x; j2++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
    
    // hollow square pattern, 5 x 5
    for (int a1 = 0; a1 < 5; a1++)
    {
        for (int b1 = 0; b1 < 5; b1++)
        {
            if (a1 == 0 || b1 == 0 || a1 == 4 || b1 == 4)
            {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    
    // hollow square pattern, custom scale
    int y;
    cout << "enter the scale of pattern: ";
    cin >> y;
    for (int a2 = 0; a2 < y; a2++)
    {
        for (int b2 = 0; b2 < y; b2++)
        {
            if (a2 == 0 || a2 == y - 1 || b2 == 0 || b2 == y - 1)
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
    cout << endl;

    // solid half pyramid, 4 x 4
    for (int c1 = 0; c1 < 4; c1++)
    {
        for (int d1 = 0; d1 < c1 + 1; d1++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
    // solid half pyramid, custom scale
    int z;
    cout << "enter the scale of pattern: ";
    cin >> z;
    for (int c2 = 0; c2 < z; c2++)
    {
        for (int d2 = 0; d2 < c2 + 1; d2++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    // hollow half pyramid, 7 x 7
    for (int p1 = 0; p1 < 7; p1++)
    {
        for (int q1 = 0; q1 < p1 + 1; q1++)
        {
            if ( p1 == 6 || q1 == 0 || q1 == p1)
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
    
    // hollow half pyramid, custom scale
    int p;
    cout << "enter the scale of pattern: ";
    cin >> p;
    for (int p2 = 0; p2 < p; p2++)
    {
        for (int q2 = 0; q2 < p2 + 1; q2++)
        {
            if ( p2 == p - 1 || q2 == 0 || q2 == p2)
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
    cout << endl;

    // solid half inverted pyramid, 6 x 6
    for (int x1 = 0; x1 < 6; x1++)
    {
        for (int y1 = 0; y1 < 6 - x1; y1++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // solid half inverted pyramid, custom scale
    int q;
    cout << "enter the scale of pattern: ";
    cin >> q;
    for (int x2 = 0; x2 < q; x2++)
    {
        for (int y2 = 0; y2 < q - x2; y2++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    // hollow half inverted pyramid, 7 x 7
    for (int m1 = 0; m1 < 7; m1++)
    {
        for (int n1 = 0; n1 < 7 - m1; n1++)
        {
            if (m1 == 0 || n1 == 0 || n1 == 7 - m1 - 1)
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
    
    // hollow half inverted pyramid, custom scale
    int r;
    cout << "enter the scale of pattern: ";
    cin >> r;
    for (int m2 = 0; m2 < r; m2++)
    {
        for (int n2 = 0; n2 < r - m2; n2++)
        {
            if(m2 == 0 || n2 == 0 || n2 == r - 1 - m2)
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
    cout << endl;

    // solid full pyramid, 5 x 5
    for (int u1 = 0; u1 < 5; u1++)
    {
        int w = 0;
        for (int v1 = 0; v1 < 5 * 2 - 1; v1++)
        {
            if (v1 < 5 - u1 - 1)
            {
                cout << "` ";
            }
            else if (w < 2 * u1 + 1){
                cout << "* ";
                w++;
            }
            else{
                cout << "` ";
            }
        }
        cout << endl;
    }

    // solid full pyramid, custom scale
    int kk;
    cout << "enter the scale of pattern: ";
    cin >> kk;
    for (int g = 0; g < kk; g++)
    {
        int gh = 0;
        for (int h = 0; h < 2 * kk - 1; h++)
        {
            if (h < kk - 1 - g)
            {
                cout << "` ";
            }
            else if (gh < 2 * g + 1)
            {
                cout << "* ";
                gh++;
            }
            else{
                cout << "` ";
            }
        }
        cout << endl;
    }
    cout << endl;

    // hollow full pyramid, 5 x 5
    for (int e = 0; e < 5; e++)
    {
        int ef = 0;
        for (int f = 0; f < 2 * 5 - 1; f++)
        {
            if (f < 5 - e - 1)
            {
                cout << "` ";
            }
            else if (ef < 2 * e + 1)
            {
            if (ef == 0 || ef == 2 * e || e == 5 - 1)
                {
                    cout << "* " ;                
                }
                else {
                    cout << "` ";
                }
                ef++;
            }
            else {
                cout << "` ";
            }
        }
        cout << endl;
    }
    

    // hollow full pyramid, custom scale
    int s;
    cout << "enter the scale of pattern: ";
    cin >> s;
    for (int u2 = 0; u2 < s; u2++)
    {
        int w2 = 0;
        for (int v2 = 0; v2 < 2 * s - 1; v2++)
        {
            if (v2 < s - u2 - 1)
            {
                cout << "` ";
            }
            else if (w2 < 2 * u2 + 1)
            {
            if (w2 == 0 || w2 == 2 * u2 || u2 == s - 1)
                {
                    cout << "* " ;                
                }
                else {
                    cout << "` ";
                }
                w2++;
            }
            else {
                cout << "` ";
            }
        }
        cout << endl;
    }
}
#include <iostream>
using namespace std;

int main() {
    // flipped solid diamond, 5 x 5
    for (int i = 0; i < 2 * 5 - 1; i++)
    {
        for (int j = 0; j < 5 * 2 - 1; j++)
        {
            // the first half
            if (i == 0 || i == 8)
            {
                cout << "* ";
            }
            else if (j <= 4 + (i - 1) && j >= 4 - (i - 1) && i < 5)
            {
                cout << "` ";
            }
            // the second half
            else if (i >= 5 && j <= (6 - (i - 5)) && j >= (i - 3))
            {
                cout << "` ";
            }
            else {
                cout << "* ";
            }
        }
        cout << endl;
    }

    // flipped solid diamond, custom scale
    int x;
    cin >> x;
    for (int i = 0; i < 2 * x - 1; i++)
    {
        for (int j = 0; j < x * 2 - 1; j++)
        {
            // the first half
            if (i == 0 || i == 2 * x - 2)
            {
                cout << "* ";
            }
            else if (j <= (x - 1) + (i - 1) && j >= (x - 1) - (i - 1) && i < x)
            {
                cout << "` ";
            }
            // the second half
            else if (i >= x && j <= ((x + x - 4) - (i - x)) && j >= (i - (x - 2)))
            {
                cout << "` ";
            }
            else {
                cout << "* ";
            }
        }
        cout << endl;
    }
    
    // number half pyramid
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << j + 1;
            if (i != j)
            {
                cout << "*";
            }
            
        }
        cout << endl;
    }
    for (int k = 4 - 1; k > 0; k--)
    {
        for (int j = 0; j < k; j++)
        {
            cout << j + 1;
            if (k - 1 != j)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}
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

    // 5 x 5 number full pyramid
    for (int i = 0; i < 5; i++)
    {
        int k = i;
        for (int j = 0; j < 5 + i; j++)
        {
            if (j < 5 - (i + 1))
            {
                cout << "  ";
            }
            else if (j < 5)
            {
                k++;
                cout << k << " "; 
            }
            else if (j > 4) {
                k--;
                cout << k << " ";
            }
        }
        cout << endl;
    }

    // hollow full number pyramid, 5 x 5
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 + i; j++)
        {
            if (j < 5 - (i + 1))
            {
                cout << "  ";
            }
            else if (j == 5 - (i + 1)) 
            {
                cout << 1 << " ";
            }
            else if ((i < 4 && i > 0) && j > 5 - i && j < 5 + i)
            {
                cout << "  ";
            }
            else if (i == 4) {
                if (j % 2 == 1)
                {
                    cout << "  ";
                }
                if (j % 2 == 0) {
                    cout << (j + 2) / 2 << " ";
                }
            }
            if(j == 5 - 1 + i && (i > 0 && i < 4)) {
                cout << i + 1;
            }
        }
        cout << endl;
    }
    return 0;
}
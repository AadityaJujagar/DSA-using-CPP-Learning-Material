#include <iostream>

using namespace std;

main()
{
    // if-else statement
    int aa;
    cin >> aa;
    if (aa > 0)
    {
        cout << "greater than zero\n";
    }
    else
    {
        cout << "zero or less than zero\n";
    }

    // nested if-else
    int a;
    cin >> a;
    if (a > 0)
    {
        cout << a << " is positive\n";
        if (a % 2 == 0)
        {
            cout << a << " is even\n";
        }
        else
        {
            cout << a << " is odd\n";
        }
    }
    else if(a < 0)
    {
        cout << a << " is negative\n";
        if (a % 2 == 1)
        {
            cout << a << " is odd\n";
        }
        else
        {
            cout << a << " is even\n";
        }
    }
    else{
        cout<<"number entered is zero"<<endl;
    }

    // if-else ladder
    int marks;
    cin >> marks;
    if (marks >= 90 && marks <= 100)
    {
        cout << "grade A\n";
    }
    else if (marks >= 80 && marks < 90)
    {
        cout << "grade B\n";
    }
    else if (marks >= 70 && marks < 80)
    {
        cout << "grade C\n";
    }
    else if (marks > 60 && marks < 70)
    {
        cout << "grade D\n";
    }
    else
    {
        cout << "fail\n";
    }
}
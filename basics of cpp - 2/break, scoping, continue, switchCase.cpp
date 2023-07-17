#include <bits/stdc++.h>
using namespace std;

int main() {
    // break keyword
    int y;
    cout << "enter where to stop the loop at: ";
    cin >> y;
    for (int i = 0; i < 10; i++)
    {
        cout << "sentence number :" << i << endl;
        if (i == y){
            cout << "lets stop the loop at :" << y << endl;
            break;
        }
    }
    cout << endl;
    
    // continue statement
    int z;
    cout << "enter what sentence to skip: ";
    cin >> z;
    for (int i = 0; i < 10; i++)
    {
        if (i == z)
        {
            cout << "sentence to be skipped is number :" << i << endl;
            continue;
        }
        cout << "sentence number " << i;
        cout << endl;
    }
    cout << endl;
    
    // variable scoping
    int s = 10;
    cout << "s outside the code block, beginning: " << s << endl;
    // cant be redeclared but in different code block its allowed
    if (1)
    {
        int s = 8;
        cout << "s inside the code block: " << s << endl;
    }
    cout << "s outside the block, end: " << s << endl << endl;

    // operator precedence
    // refer the ss

    // switch case
    char ch;
    cout << "enter a char: ";
    cin >> ch;
    switch(ch) {
        case 'a':
        case 'A':
        cout << "vowel A";
        break;

        case 'e':
        case 'E':
        cout << "vowel E";
        break;
        
        case 'i':
        case 'I':
        cout << "vowel I";
        break;
        
        case 'o':
        case 'O':
        cout << "vowel O";
        break;
        
        case 'u':
        case 'U':
        cout << "vowel U";
        break;

        default:
        cout << "not a vowel";
    }
    // if we use continue statement instead of break statement
    // it will simply continue printing the next cases instead of breaking
    return 0;
}
#include <iostream>
using namespace std;

// calling a function
void callFunc(){
    cout << "function called\n";
}
int main() {
    callFunc();
    fA();
    return 0;
}

// order of functions being called
void fC(){
    cout << "finally reached to fC\n";
}
void fB()
{
    cout << "fB being called\n";
    fC();
}
void fA(){
    cout << "fA being called\n";
    fB();
}
    
#include <iostream>
using namespace std;
int main()
{
    int a = 624, b = 462 , c;

   // cout << (true && false || true) << endl;
    //cout << (a == a++);

    // b /= 2;
    // cout << b;

    // ? swiping numbers

    // c = a;
    // a = b;
    // b = c;

    a = a + b; // 11
    b = a - b; // 17
    a = a - b; // 6

    cout << "a is " <<a<<endl;
    cout << "b is "<< b << endl;

    return 0;
}
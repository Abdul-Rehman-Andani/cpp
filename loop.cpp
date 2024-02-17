#include <iostream>
using namespace std;
int main()
{
    // ? counting length of number
    // int n, count = 0;

    // cout << "Enter number : ";
    // cin >> n;

    // if(n == 0){
    //     cout << "please enter other number";
    // }

    // if(n < 0){
    //     n = -(n);
    // }

    // while ( n > 0)
    // {
    //     n = n / 10;
    //     count++;
    // }

    // cout <<"length of is " << count;

    // ? resversing the number
    int n, reverse;

    cout << "Enter number : ";
    cin >> n;

    if(n == 0){
        cout << "please enter other number";
    }

    if(n < 0){
        n = -(n);
    }

    while (n > 0)
    {
        n = n / 10; 
    }
    

    return 0;   
}
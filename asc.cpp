#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter number : ";
    cin >> n;

    //cout << "ASC character of number  " << n << " is " << char(n);

    if(n >= 18){
        cout << "Above 18" << endl;
    }
    else{
        cout << "Under 18" << endl;
    }

    return 0;
}
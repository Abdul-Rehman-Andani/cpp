#include <iostream>
using namespace std;
int main()
{

    int userPin = 9999, error = 0, pin;

    do
    {
        cout << "Enter Pin code : ";
        cin >> pin;
        if (pin != userPin)
        {
            error++;
        }
    } while (error < 3 && userPin != pin);

    if (error < 3)
    {
        cout << "Success" << endl;
    }
    else
    {
        cout << "Blocked" << endl;
    }

    return 0;
}
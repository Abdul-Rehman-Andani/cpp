#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

    int height, width;
    char smb;

    cout << "Enter height : ";
    cin >> height;

    cout << "Enter width : ";
    cin >> width;

    cout << "Enter symbol : ";
    cin >> smb;

    for (int h = 0; h < height; h++)
    {
        for (int w = 0; w < width; w++)
        {
            cout << setw(3) << smb;
        }

        cout << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

template<typename T>

void swip(T& a , T& b){
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 5, b = 10;
    char c = 'c', d = 'd';
    cout << "c : " << c << "d : " << d << endl;
    swip<char>(c, d);
    cout << "c : " << c << "d : " << d << endl;

    return 0;
}
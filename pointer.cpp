#include <iostream>
using namespace std;

void swap(int *ptr){
    cout << *ptr;
}

int main()
{

    int num = 5;
    int *ptr = &num;

    swap(&num);

    return 0;
}
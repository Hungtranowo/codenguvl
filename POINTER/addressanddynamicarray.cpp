#include <iostream>

using namespace std;

int main()
{
    short arr[6] = {1, 2, 3, 4, 5, 6};
    short *p = &arr[0];

    cout << *(p+5) << endl;
    cout << intptr_t(p) << " " << intptr_t(p+5);
   
    delete[]p;
    return 0;
}
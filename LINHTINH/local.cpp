#include <iostream>
using namespace std;

int main()
{
     // we're declaring y here because we need it in this outer block later
     int y(6);

     {
           int x;
           cin >> x;
           // if we declared y here, immediately before its actual first use...
           if (x == 9)
                 y = 9;
     } // ... it would be destroyed here

     cout << y; // and we need y to exist here

     return 0;
}
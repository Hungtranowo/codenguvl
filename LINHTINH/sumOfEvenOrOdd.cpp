#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 1;
    if (n % 2 == 0 && n > 0)
    {
        for (int i = 2; i <= n; i += 2)
        {
            sum *= i;
        }
        cout << sum;
    }
    else if (n % 2 != 0 && n > 0)
    {
        for (int i = 1; i <= n; i += 2)
        {
            sum *= i;
        }
        cout << sum;
    }
    else if (n == 0){
        cout << 0;
    }
    else
    {
        cout << "Invalid";
    }
    return 0;
}
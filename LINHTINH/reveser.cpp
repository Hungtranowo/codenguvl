#include <iostream>

using namespace std;

int funcreverse(int number)
{
    static int remainder, reverse = 0;
    if (number == 0) return reverse; 
    // while (number != 0)
    // {
    remainder = number % 10;
    reverse = reverse * 10 + remainder;
    return funcreverse(number / 10);
    // }
}

int main()
{

    int number;
    cin >> number;

    cout << funcreverse(number);
    return 0;
}
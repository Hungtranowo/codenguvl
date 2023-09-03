// số có tổng bằng 9 là số đẹp 

#include <iostream>

using namespace std;

int main(){
    int number; cin >> number;
    int sum = 0; int remainder;

    while (number != 0){
        remainder = number % 10;
        sum += remainder;
        number /= 10;
    }

    if (sum % 10 == 9){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
#include <iostream>

using namespace std;

int main(){
    int left = 7, right = 0;
    int day; cin >> day;
    int remainder;

    while (day != 0){
        left = left - day;
        day = day - left;
        
        if (remainder > 0){
            right = right + remainder;
        }

    }

    cout << left << " " << right;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
   
    char character;
    cin >> character;

    if (character>=97 && character<=112){
        cout << "lower-case alphabet";
    }
    else if (character>=65 && character<=90){
        cout << "upper-case alphabet";
    }
    else 
        cout << "not an alphabet";
    return 0;
}
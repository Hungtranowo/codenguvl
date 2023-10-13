#include <iostream>

using namespace std;

int find(int a, int b){
    while (a != b){
        if (a > b) a -= b;
        else b -= a;
    }
    return a;
}

int main(){
    int a, b; cin >> a >> b;
    int c = find(a, b);
    cout << c;
    return 0;
}
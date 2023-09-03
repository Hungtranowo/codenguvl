#include <iostream>

using namespace std;
int sumOfPrime(int n){
    int sum = 0;
    for (int i=1; i<n; i++){
        if (n % i == 0){
            sum += i;
        }
    }
    return sum;
}
int main(){
    int a, b; cin >> a >> b;
    if (a == sumOfPrime(b) && b == sumOfPrime(a)){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
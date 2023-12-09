#include <iostream>

using namespace std

unsigned long long fibo(unsigned long long n){
    if (n==1 || n==2) return 1;
    return n + fibo(n-1);
}

int main(){
    unsigned long long n; cin >> n;
    cout << fibo(n);
    return 0;
}
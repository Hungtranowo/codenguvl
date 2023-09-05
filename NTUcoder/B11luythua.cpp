#include <iostream>

using namespace std;

unsigned long long luythua(long long x, long long n){
    if (n==0) return 1;
    return x * luythua(x, n-1);
}
int main(){
    unsigned long long x;
    unsigned long long n;
    cin >> x >> n;
    cout  << luythua(x, n);
    return 0;
}

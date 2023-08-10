#include <iostream>

using namespace std;

int sumOfUoc(int n){
    int sum = 0;
    for (int i=1; i< n; i++){
        if (n % i == 0){
            sum +=i;
        }
    }
    return sum;
}



int main(){
    int n; cin >> n;
    int check = sumOfUoc(n);
    
    if (check == n) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    
    return 0;
}
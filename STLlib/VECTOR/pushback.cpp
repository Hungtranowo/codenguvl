#include <iostream>
#include <vector>

using namespace std;

int main(){
    int number; cin >> number;
    vector <int> v(number+1);

    for (int i=0; i<number; i++){
        int j; cin >> j;
        v.push_back(j);
    }

    int x; cin >> x;
    v.push_back(x);

    for (int a : v){
        cout << a << " ";
    }
    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

int main(){
    // int n; cin >> n;
    vector <int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    // for (auto it = v.begin(); it < v.end(); it++){
    //     cout << *it << " ";
    // }
    cout << *(v.begin() + 2);
    return 0;
}
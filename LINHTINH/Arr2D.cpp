#include <iostream>

using namespace std;

int main(){
    int arr[10][10];
    int x, y; cin >> x >> y;
    for (int i=0; i<x; i++){
        for (int j=0; j<y; j++){
            cin >> arr[i][j];
        }
    }
    cout << "------" << endl;
    for (int i=0; i<x; i++){
        for (int j=0; j<y; j++){
            cout << arr[i][j] << " "; 
        }
        cout << endl;
    }
    return 0;
}

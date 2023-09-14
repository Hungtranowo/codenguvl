#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;

    int *arr = new int[n+1];

    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    int k, x; cin >> k >> x;

    for (int i=n; i>k; i--){
        for (int j=i-1; j>k; j--){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    
    arr[k-1] = x;
    }

    for (int i=0; i<=n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
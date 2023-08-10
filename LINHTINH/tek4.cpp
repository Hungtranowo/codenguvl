#include <iostream>
using namespace std;

int main() {
  int decimal; cin >> decimal;
  int ele=0, arr[50];
  while (decimal!=0){
    arr[ele] = decimal % 2;
    ele++;
    decimal = decimal / 2;
  }
  for (int i=ele-1; i>=0; i--){
    cout << arr[i];
  }
  return 0;
}
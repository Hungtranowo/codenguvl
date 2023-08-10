#include <iostream>

using namespace std;

int main(){
  int year; cin >> year;
  string strYear = to_string(year);
  
  if (strYear.size() >= 4 && year % 100 == 0){
    if (year % 400 == 0){
    cout << "Năm " << year << " là năm nhuận!";
    }
    else cout << "Năm " << year << " không phải là năm nhuận!";
  }
  
  else {
    if (year % 4 == 0 && year % 100 != 0){
      cout << "Năm " << year << " là năm nhuận!";
   }
   else if (year % 100 == 0 && year % 400 == 0){
     cout << "Năm " << year << " là năm nhuận!";
   }
   else cout << "Năm " << year << " không phải là năm nhuận!";
  }
   return 0;
}
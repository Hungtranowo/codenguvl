#include <iostream>

using namespace std;

                  /*
                  n=5
                  i=0, j=5                
                  i=1, j=4 5 6            
                  i=2, j=3 4 5 6 7       
                  i=3, j=2 3 4 5 6 7 8
                    n-i<=j<=n+i
                  */

int main(){
  int rows; cin >> rows;
  
  for (int i=0; i<rows; i++){
    for (int j=0; j<rows-i-1; j++){
      cout << " ";
    }
    for (int k=0; k<2*i+1; k++){
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}
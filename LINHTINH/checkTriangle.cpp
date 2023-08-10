#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    
    if (a+b>c && a+c>b && b+c>a){
      if (pow(a, 2) + pow(b, 2) == pow(c, 2) || pow(a, 2) + pow(c, 2) == pow(b, 2) || pow(c, 2) + pow(b, 2) == pow(a, 2)){
        cout << "Right triangle !";
      }
      else if (a == b || a == c || b == c){
        cout << "Isosceles triangle !";
      }
      else if (a == b && a == c){
        cout << "Equilateral triangle !";
      }
      else if (pow(a, 2) > pow(b, 2) + pow(c, 2) || pow(b, 2) > pow(c, 2) + pow(a, 2) || pow(c, 2) > pow(a, 2) + pow(b, 2)){
        cout << "Obtuse triangle !";
      }
      else cout << "Acute triangle !";
    }
    
    else 
      cout << "Not a Triangle !";

    return 0;
}

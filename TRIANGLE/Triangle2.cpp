#include <iostream>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    
    if ((a < b + c) && (b < a + c) && (c < a + b) && (a > 0) && (b > 0) && (c > 0)) {
      if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b)) {
        cout << "Right triangle !";
      }
      else if ((a == b) && (b == c)) {
        cout << "Equilateral triangle !";
      }
      else if ((a == b) || (a == c) || (b == c)) {
        cout << "Isosceles triangle !";
      }
      else if ((a * a > b * b + c * c) || (b * b > a * a + c * c) || (c * c > a * a + b * b)) {
        cout << "Obtuse triangle !";
      }
      else {
        cout << "Acute triangle !";
      }
    }
    else {
      cout << "Not a Triangle !";
    }

    return 0;
}

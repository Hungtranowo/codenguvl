
#include <iostream>
#include <string>

using namespace std;



int main() {
	// cout<< "Hello World ?? ! ";
	int a[] = {4, 3, 2, 1};
	int *p = a;
	cout << p[1];
	cout << *(a);
	cout << (*p)[0];
	return 0;
}
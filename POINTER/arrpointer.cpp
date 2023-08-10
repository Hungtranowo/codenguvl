#include<iostream>
using namespace std;

int main() {
	int a[5] = { 0, 1, 2, 3, 4 };
	int* p = &a[0];
	cout << *p << endl;
	cout << p[0] << endl;
	cout << p[1] << endl;
	cout << *p++ << endl;
	cout << (*p)++ << endl;
	cout << *(p++) << endl;

	//*(p++);
	//cout << *p;
}

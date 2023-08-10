#include<iostream>

using namespace std;

int main() {
	// Khai báo biến a
	// int a;
	// // Khai báo con trỏ p
	// int* p;
    int * iPtr;
	*iPtr = 55;
	cout << *iPtr << endl;
	// // Cho con trỏ p trỏ tới địa chỉ của biến a
	// p = &a;
	// // Thay đổi giá trị của biến a thông qua con trỏ p
	// *p = 7;
	// // In ra giá trị của biến a sau khi thay đổi
	// cout << "Value of a: " << a;
	return 0;
}
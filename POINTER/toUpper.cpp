
#include <iostream>
#include <string>

using namespace std;

void toUpper(string *s) {
    for (int i=0; i<(*s).size(); i++){
		if ((*s)[i] >= 97 && (*s)[i] <= 122 ){
            (*s)[i] -= 32;
        }
	}
}
// void to(int *p){

// }


int main() {

	// int a[] = {4, 3, 2, 1};
	// int *p;
	// p = a;
	// cout << p[1];
	// string str = "Hello";
	// char *ps = &str[0];
	// cout << ps[1];
	// // cout << *(a);
	
	
	return 0;
}
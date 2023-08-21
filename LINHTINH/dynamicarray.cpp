#include <iostream> 

using namespace std;

int main() {
	int n;
	cin >> n;
	// Thực hiện cấp phát bộ nhớ động cho mảng
	int* arr = new int[n];
	
	// Nhập dữ liệu cho mảng
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	// Hiển thị ra màn hình các số chia hết cho 3 và không chia hết cho 5 trong arr
    for (int i = 0; i < n; i++) {
		if (arr[i]%3==0 && arr[i]%5!=0){
            cout << arr[i] << " ";
        }
	}
	delete[]arr;
	return 0;
}
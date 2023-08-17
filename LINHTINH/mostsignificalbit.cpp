#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    
    // Dịch trái số bits cho đến khi bit quan trọng nhất được tìm thấy
    num = num << (sizeof(int) * 8 - 1);
    
    // Sử dụng phép AND để lấy giá trị của bit quan trọng nhất
    int msb = num & 1;
    
    cout << msb << endl;
    cout << 1;
    
    return 0;
}

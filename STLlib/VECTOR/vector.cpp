#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> v;

    // dùng push_back(value) để thêm phần tử vào vector
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    // nếu muốn số phần tử của vector ta có thể dùng
    int n; cin >> n;
    vector <int> v1(n);

    // nếu muốn tất cả các phần từ của vector đều có cùng một giá trị ta có thể dùng
    // int n; cin >> n;
    vector <int> v2(n, 100); // với value là giá trị mà ta muốn các phần tử đều chung



/*DUYỆT VECTOR*/

    // dùng for each 
    for (int x : v){
        cout << x << " ";
    }
    cout << endl;

    // dùng iterator
    for (vector<int>::iterator it = v.begin(); it < v.end(); it++){
        cout << *it << " "; // iterator is a pointer so that we have to use "*" when we wanna GET value
    }
    cout << endl;

    // dùng auto thay thế cho iterator
    for (auto it = v.begin(); it < v.end(); it++){
        cout << *it << " ";
    }
    cout << endl;



    // v.begin() is a pointer trỏ vào vị trí đầu tiên của vector
    // v.end() is a pointer trỏ vào vị trí sau vị trí cuối cùng của vector
    // vì cả hai cùng là pointer nên khi muốn lấy value thì ta cần dùng toán tử "*"
    cout << *v.begin() << endl;
    cout << *(v.end()-1) << endl;

    // có thể truy cập từng phần tử của vector thông qua chỉ số của nó
    cout << v[0] << " ";
    cout << v[1] << " ";
    cout << v[2] << " ";
    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

int main(){
    // int n; cin >> n;
    vector <int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    //iterator is a pointer so that we have to use "*" when we wanna lấy value
    // for (vector<int>::iterator it = v.begin(); it < v.end(); it++){
    //     cout << *it << " ";
    // }

    //dùng auto thay thế
    // for (auto it = v.begin(); it < v.end(); it++){
    //     cout << *it << " ";
    // }

    // v.begin() is a pointer trỏ vào vị trí đầu tiên của vector
    // v.end() is a pointer trỏ vào vị trí sau vị trí cuối cùng của vector
    // vì cả hai cùng là pointer nên khi muốn lấy value thì ta cần dùng toán tử "*"
    cout << *v.begin() << endl;
    cout << *(v.end()-1) << endl;
    return 0;
}
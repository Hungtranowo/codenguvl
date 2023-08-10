#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string x,y;
    int u = 1;
    cin >> x;
    cin >> y;
    if(x.length() < y.length()){    //Vì ít nhất một lần di chuyển hợp lệ
        deque<char> t;
        for(int i = x.length()-1; i >= 0; i--)
            t.push_front(x[i]);
        while(t.size() < y.length()){
            if(u%2 == 1){
                t.push_front('A');
                if(t.size() == y.length()) break;
                t.push_back('B');
            }else{
                t.push_back('A');
                if(t.size() == y.length()) break;
                t.push_front('B');
            }
            u++;
        }
        u--;

        x = "";
        if(u%2 == 1)
            while(!t.empty()){
                x = x + t.back();
                t.pop_back();
            }
        else{
            while(!t.empty()){
                x = x + t.front();
                t.pop_front();
            }
        }
        if(x == y) cout << "Yes";
        else cout << "No";
    }
    else cout << "No";
    return 0;
}


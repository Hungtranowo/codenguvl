#include <bits/stdc++.h>
using namespace std;
int n;

string a[1000];
void read()
{
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) getline(cin,a[i]);
}
void Solve()
{
    string c = a[0];
    string d = a[0];
    for (int i = 1; i < n; i++)
    {
        string k = a[i];
        if (c < k) c = k;
        if (d.length() < k.length()) d = k;
    }
    cout << c << endl << d;
}
int main()
{
    read();
    Solve();
    return 0;
}
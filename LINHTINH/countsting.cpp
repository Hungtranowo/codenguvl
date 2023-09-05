#include <iostream>

using namespace std;

int main(){
    string s; 
    getline(cin, s);

    int count = 0;
    for (int i=0; i<s.length(); i++){
        // cout << "i " << s[i] << endl;
        for (int j=i+1; j<s.length(); j++){
            // cout << "j " << s[j] << endl;
            if (s[i] == s[j]){
                count++;
                // cout << count << endl;
            }
        }
    }
    cout << s.length() - count*2;
    return 0;
}
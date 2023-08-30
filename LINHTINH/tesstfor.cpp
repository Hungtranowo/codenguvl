#include <iostream>

using namespace std;

int main(){
    int count = 0;
    for (int i=0; i<10; i++)
        for (int j=0; j<10; j++){
            count++;
            if (count = 1){
                break;
            }
    }
    cout << count;
}
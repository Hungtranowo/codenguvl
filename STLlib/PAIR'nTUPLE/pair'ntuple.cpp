#include <iostream>

using namespace std;

int main(){
    // declare PAIR 
    //pair <datatype1, datatype2> namePair;
    pair <int, int> time = {0, 10};
    pair <string, int> nameAge = {"Hung", 15};

    cout << time.first << " " << time.second << endl;
    cout << nameAge.first << " " << nameAge.second << endl; 

    return 0;
}
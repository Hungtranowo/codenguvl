#include <iostream>

using namespace std;

int main(){
    int nums[1000], target, ele;
    cin >> ele;
    for (int i=0; i<ele; i++){
        cin >> nums[i];
    }
    cin >> target;
    for (int i=0; i<ele; i++){
        for (int j=i+1; j<ele; j++){
            if (nums[i]+nums[j] == target){
                cout << "[" << nums[i] << "," << nums[j] << "]" << " ";
            }
        }
    }
    return 0;
}
#include <iostream> 

int main(){
	int number; std::cin >> number;

	for (int i=1; i<number; i++){
		for (int j=1; j<=i; j++){
			if (j==1){
				std::cout << "*";
			}

			if (j>1 && j<i){
				std::cout << " ";
			}
			
			if (j==i && j!=1){
				std::cout << "*";
			}
		}
		std::cout << std::endl;
	}

	for (int i=1; i<=number; i++){
		std::cout << "*";
	}
	return 0;
}
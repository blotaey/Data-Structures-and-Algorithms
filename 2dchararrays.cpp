#include<iostream>
using namespace std;

int main(){
	
	char numbers[][10] = {
		"One",
		"Two",
		"Three",
		"Four",
		"Five",
	};


	for(int i = 0; i < 5; i++){
		cout << numbers[i] << endl;
	}


	return 0;
}

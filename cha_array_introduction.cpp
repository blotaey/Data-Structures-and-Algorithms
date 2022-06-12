#include<iostream>
#include<cstring>
using namespace std;

int main(){

	char a[] =  "abcdeifgh";   //{'a','n','c','d','e','f'};
	cout << a << endl;
	
	char b[100];
	cin >> b;
	
	cout << b << endl;
	
	cout << strlen(a) << endl; //number of visible numbers
	cout << sizeof(a) << endl; // +1 because of null character



	return 0;
}

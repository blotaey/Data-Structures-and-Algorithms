#include<iostream>
using namespace std;

int main(){
	
	int x= 10;
	float y = 26.5;
	
	cout << &x << endl;
	//Has a jump between memories because each box of memory has 4 bytes
	cout << &y << endl;
	
	return 0;
}

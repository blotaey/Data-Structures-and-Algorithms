#include<iostream>
using namespace std;


int main(){
	
	//DEFERENCE OPERATOR
	
	int x = 10;
	
	int * xtpr = &x;
	
	cout << xtpr << endl;
	
	cout << *xtpr << endl;
	
	//NULL PTR (SEGMENTATION FAULT)
	
	//int *q = null;
	
	//cout << q << endl;
	

	return 0;
}

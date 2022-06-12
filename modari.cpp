#include<bits/stdc++.h>

using namespace std;


const int P = 5;

int addm(int x, int y){
	return (x+y) % P;
}

int main(){
	
	cout << addm(3,5);
	
	
	return 0;
}

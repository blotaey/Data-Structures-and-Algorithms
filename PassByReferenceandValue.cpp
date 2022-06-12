#include<iostream>
using namespace std;


//Passing By Value 
void applyTax(int income){
	float tax = 0.10;
	income = income - income*tax;
}

//Passing By Reference using reference variables
void applyTaxx(int & income){
	float tax = 0.10;
	income = income - income*tax;
}

//Passing By Reference using Pointers
void watchVideo(int * viewsptr){
	
	*viewsptr = *viewsptr + 1;
	
}


int main(){
	
	int income;
	int views = 100;
	cin >> income;
	
	cout << "--------------------------" << endl;
	
	applyTax(income);
	cout << income << endl;
	
	applyTaxx(income);
	cout << income << endl;

	watchVideo(&views);
	cout << views << endl;

}

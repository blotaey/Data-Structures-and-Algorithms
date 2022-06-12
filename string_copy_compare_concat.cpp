#include<iostream>
#include<cstring>
using namespace std;

int main(){
	
	char a[1000] = "apple";
	char b[1000];
	
	//Calc Lenght 
	cout << strlen(a) << endl;
	
	//String Copy
	strcpy(b,a);
	cout << b << endl;
	
	//String Compare 
	cout << strcmp(a,b) << endl;
	
	//Concatenate
	char web[100] = "www.";
	char domain[100] = "fsdfsefrgs.com.br";

	cout << strcat(web,domain) << endl;
	
	return 0;
}

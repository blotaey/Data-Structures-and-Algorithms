#include<iostream>
#include<string>

using namespace std;


int main(){
	
	string s; //Dynamic array
	
	getline(cin,s,'.');
	
	for(char ch : s){
		
		cout << ch << "," << endl;
	}
	cout << s << endl;
	
	//vector<string> .....
}

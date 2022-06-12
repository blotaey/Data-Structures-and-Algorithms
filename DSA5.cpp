#include<bits/stdc++.h>
using namespace std;

vector<int> kRotate(vector<int> a, int k){
    // your code  goes here
    
    vector<int> temp(a.size());
    
    for(int i=0; i < a.size(); i++){
		temp[(i+k)%a.size()] = a[i];
	}
	
	return temp;
}

int main(){
	
	vector<int> a = {1,3,5,7,9};
	int x = 2;
	
	cout << kRotate(a,x) << endl;



	return 0;
}

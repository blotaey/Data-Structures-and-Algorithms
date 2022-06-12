#include<iostream>
using namespace std;

void print(int arr[][100], int n, int m ){

	//Print
	for(int i = 0; i<n; i++){
		for(int j = 0; j<m; j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}


int main(){
	
	//constrain 
	int arr[1000][100];
	//n rows and m columns
	int n,m;
	cin>>n>>m;
	
	for(int i=0; i < n; i++){
		for(int j=0; j < m; j++){
			cin >> arr[i][j];
		}
	
	}
	//print the array
	cout << "--------------------------" << endl;
	print(arr,n,m);


	return 0;
}

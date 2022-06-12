#include<iostream>
using namespace std;

//Sort the elements in increasing order
void bubble_sort(int a[], int n){
	
	for(int times = 1;times <= n-1; times++){
		//repeated swapping
		for(int j=0; j <= n - times - 1; j++){
			if(a[j] > a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
}

int main(){

	int arr[] = {-2,-3,10,9,5,6,8,7,-1};
	int n = sizeof(arr)/sizeof(int);
	bubble_sort(arr,n);
	
	for(auto x : arr){
		cout << x << ",";
	}
	
	return 0;
}

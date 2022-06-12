#include<iostream>
using namespace std;

void insertion_sort(int a[], int n){
	
	for(int i = 1; i <= n-1; i++){
	 int current = a[i];
	
	 int prev = i - 1;
	
	 //loop to find the right index where the element current should be inserted
	 while(prev >= 0 and a[prev] > current){
		a[prev + 1] = a[prev];
		prev = prev - 1;
	 
	 }
	 
	 a[prev + 1] = current;
	}
}

int main(){
	
	int arr[] = {-1,-2,-10,2,5,6,7,8,16,1};
	int n = sizeof(arr)/sizeof(int);
	insertion_sort(arr,n);
		
	for(auto x : arr){
		cout << x << ",";
	}
	
	return 0;
}

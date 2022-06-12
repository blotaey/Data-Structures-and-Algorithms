#include<iostream>
using namespace std;

void selection_sort(int a[], int n){
	
	for(int pos = 0; pos <= n-2; pos++){
		
		int min_position = pos;
		
		//find out the minimum element
		for(int j=pos; j<n; j++){
			
			if(a[j] < a[min_position]){
				min_position = j;
			} 
		}
		
		//swap outside the loop
		swap(a[min_position], a[pos]);
	}
	

}


int main(){
	
	int arr[] = {10,4,5,6,7,-1,2,-10,23};
	int n = sizeof(arr)/sizeof(int);
	selection_sort(arr,n);
	
	for(auto x : arr){
		cout << x << ",";
	}
	
	return 0;

}

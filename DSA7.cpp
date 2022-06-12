#include<bits/stdc++.h>
using namespace std;


vector<int> sortingWithComparator(vector<int> a, bool flag){
    
	if(flag == true){
		int n = a.size();
		for(int times=1; times <= n-1; times++){
			for(int j=0; j <= n - times - 1; j++){
				if(a[j] > a[j+1]){
					swap(a[j], a[j+1]);
				}
			}
		}
		
		return a;
	}
	
	if(flag == false){
		int n = a.size();
		for(int times=1; times <= n-1; times++){
			for(int j=0; j <= n - times - 1; j++){
				if(a[j] > a[j+1]){
					swap(a[j], a[j+1]);
				}
			}
		}
		reverse(a.begin(),a.end());
		
		return a;
	}
}

void printArray(vector<int> arr, int n){
	for(int i=0; i < n; i++){
		cout << arr[i] << endl;
	}
}

int main(){
	vector<int> a = {111,33,5,7,29};
	
	sortingWithComparator(a,false);
	
	printArray(a,a.size());
}

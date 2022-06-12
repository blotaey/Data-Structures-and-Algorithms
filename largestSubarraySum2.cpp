#include<iostream>

using namespace std;

//Prefix Sum Approach (N square)

int largestSubarraySum2(int arr[], int n){
	
	//Prefix Sums
	int prefix[100] = {0};
	prefix[0] = arr[0];
	
	for(int i=1;i<n;i++){
		prefix[i] = prefix[i-1] + arr[i];
	}
	
	//Largest Sum login
	int largestSum = 0;
	
	for(int i=0;i<n;i++){
		for(int j=i; j<n; j++){
			//ternary operator
			int subarraySum = i>0 ? prefix[j] - prefix[i-1] : prefix[j];
			//put a check is subarray > largestSum
			largestSum = max(largestSum, subarraySum);
			
		}
	}
	return largestSum;
}

int main(){
	//Array containing
	int arr[] = {-2,3,4,-1,5,-12,6,1,3};
	int n = sizeof(arr)/sizeof(int);
	
	cout << largestSubarraySum2(arr,n);
}

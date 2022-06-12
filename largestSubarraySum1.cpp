#include<iostream>

using namespace std;

//Using Bruteforce Approach (N cubic)
int largestSubarraySum1(int arr[],int n){
	
	int largestSum = 0;
	
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			
			int subarraySum = 0;
			
			for(int k=i;k<=j;k++){
				
				subarraySum += arr[k];
			}
			//put a check is subarraySum > largestSum
			largestSum = max(largestSum, subarraySum);
		}
	}
	return largestSum;
}

int main(){

	//Array Containing
	int arr[] = {-2,3,4,-1,5,-12,6,1,3};
	int n = sizeof(arr)/sizeof(int);
	
	cout << largestSubarraySum1(arr,n);
}

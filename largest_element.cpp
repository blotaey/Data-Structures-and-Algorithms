#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> A){
	
	int max = A[0];
	
	for(int i = 1;i<A.size();i++){
		if(A[i] > max){
			max = A[i];
		}
	}
	return max;
}

int main(){
	vector<int> arr = {1,2,10,12,15};
	
	cout << largestElement(arr) << endl;
	
	return 0;
}

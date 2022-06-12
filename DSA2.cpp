#include<bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int> A) {
	int cs = 0;
	int ms = INT_MIN;
	
	for(int i=0; i < A.size(); i++){
		cs += A[i];
		if(cs>ms) ms = cs;
		if(cs < 0){
			cs = 0;
		}
	}
	
	return ms;
}

int main(){
	
	vector<int> A = {1,-2,3,4,4,-2};
	
	cout << maxSumSubarray(A) << endl;
	
	
	return 0;
}

#include<bits/stdc++.h>
using namespace std;


int lowerBound(vector<int> A, int Val) {
    // your code goes here
    
    int current_value = INT_MIN;
    
    for(int i=0; i< A.size(); i++){
		if(Val == A[i]){
			return A[i];
		}
		if(A[i] == Val - 1){
			current_value = A[i];
		}
	}
	
	if(current_value<0) return -1;
	else return current_value;
}


int main(){
	
	vector<int> A = {1,2,3,4,6};
	
	cout << lowerBound(A,4) << endl;



	return 0;
}

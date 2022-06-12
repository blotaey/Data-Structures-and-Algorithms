#include<iostream>
#include<vector>
using namespace std;

int main(){
	
	//Demo Vector
	//vector<int> arr = {1,2,4,5,16};
	
	//Fill Constructor
	vector<int> arr (10,7);
	
	//Fill Constructor
	vector<int> visited(100,0);
	
	//Pop_back
	arr.pop_back();
	
	//Push_back O(1)
	arr.push_back(12);
	
	//Print all the elements
	for(int i = 0; i < arr.size();i++){
		cout << arr[i] << endl;
	}
	
	//Size of the vector (No of the elements)
	cout << arr.size() << endl;

	//Capacity of the vector
	cout << arr.capacity() << endl;
	
	return 0;

}


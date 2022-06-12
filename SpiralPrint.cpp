#include<iostream>
using namespace std;

void SpiralPrint(int arr[][10],int n, int m){
	
	//4 variables
	int startRow = 0;
	int endRow = n - 1;
	int startCol = 0;
	int endCol = m - 1;


	//Outer loop (Tranverse array boundary)
	
	while(startCol <= endCol and startRow <= endRow){
	
		//Start Row 
		for(int col = startCol; col <= endCol; col++){
			cout << arr[startRow][col] << " ";
		}
		
		//End Col
		for(int row = startRow + 1; row <= endRow; row++){
			cout << arr[row][endCol] << " ";
		}
		
		//End Row 
		for(int col = endCol - 1; col >= startCol; col--){
			//Avoid duplicate Printing of elements
			if(startRow==endRow){
				break;
			}
			cout << arr[endRow][col] << " ";
		}
		
		//Start Col
		for(int row = endRow-1; row>= startRow + 1; row--){
			//Avoid duplicate Printing of elements
			if(startCol==endCol){	
				break;
			}
			
			cout << arr[row][startCol] << " ";
		}
		
			
		//Update the variables to inner spiral
		startRow++;
		endRow--;
		startCol++;
		endCol--;
	}
	
}


int main(){
	
	//Print in spiral form
	int arr[][10] = {{1,2,3,4},
					 {12,13,14,5},
					 {11,16,15,6},
					 {10,9,8,7}};
					 
	int n=4,m=4;
	
	SpiralPrint(arr,n,m);
	

	return 0;
}

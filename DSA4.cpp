#include<bits/stdc++.h>
using namespace std;

pair<int, int> closestSum(vector<int> arr, int x){
    int sum = 0;
    int max_sum = 0;
    pair<int,int> p;
    p = make_pair(0,0);
    
    for(int i=0; i < arr.size(); i++){
		for(int j=i; j < arr.size(); j++){
		    sum = arr[i] + arr[j];
			if(sum > max_sum && sum <= x){
			   max_sum = sum;
			   p.first = arr[i];
			   p.second = arr[j];
			   sum = 0;
			}
		}
	}
	return p;
}



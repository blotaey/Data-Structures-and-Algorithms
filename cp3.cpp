#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> nums) {
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int num:nums){
    	pq.push(num);
    }

    int sum = 0;

    while(pq.size() > 1){
    	int min1 = pq.top();
    	pq.pop();
    	int min2 = pq.top();
    	pq.pop();
    	sum+= min1;
    	sum+= min2;

    	int repush=min1 + min2;
    	pq.push(repush);
    }

    return sum;
}
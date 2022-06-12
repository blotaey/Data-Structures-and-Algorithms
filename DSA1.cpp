#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> arr) {
    int maxele = INT_MIN;
    
    for(auto element : arr){
        maxele = max(maxele, element);
    }
    return maxele;
}

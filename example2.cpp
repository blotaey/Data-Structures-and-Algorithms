#include<bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	unordered_set<int> s{1,2,3,4,5,6,12,15,0};

	int key;
	cin >> key;


	if(s.find(key)!=s.end()){
		cout << key << " is present" << endl;
	}
	else{
		cout << "Not found " << endl;
	}


	return 0;
}
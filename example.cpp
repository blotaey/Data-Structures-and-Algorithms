#include<bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	map<string, int> phonebook;

	menu["cebola"] = 15;
	menu["feijoada"] = 110;
	menu["colddrink"] = 20;
	menu["dosa"] = 99;

	//search

	string item;
	cin >> item;

	if(menu.count(item) == 0){
		cout << item << " is not avaible" << endl;
	}
	else{
		cout << item << " is avaible, and its cost is " << menu[item] << endl;
	}

	for(pair<string, int> item: menu){
		cout << item.first << " --- " << item.second << endl;
	}

}
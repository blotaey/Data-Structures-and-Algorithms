#include<bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

vector<int> factors(int x){
	vector<int> ret;
	for(int p: primes){ // precompute list of primes
		if(p * p > x){
			//checked all primes below p, now x can't be a product of two unchked primes since p^2 > x
			//so x must be prime
			
			if(x > 1){
				ret.push_back(x);
				x = 1;
			}
		}
		else{
			while(x % p == 0){ // take as much of this prime as we have
				ret.push_back(p);
				x /= p; // make sure to divide x, that makes the p^2 > x case work
			}
		}
		
		
		return ret;
	}
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	
	return 0;
}

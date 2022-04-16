#include <bits/stdc++.h>
using namespace std;
//Time complexity O(nlog(logn))


bool sieveOfEratosthenes(int n){
	vector <int> v(n+1,true);
	v[0]=v[1]= false;
	for(int i=2;i*i<=n;i++){
		if(v[i]){
			for(int j=i*i;j<=n;j+=i){
				v[j] = false;
			}
		}
	}
	return v[n];
}


int main(){
	int n;
	cin >> n;
	if(sieveOfEratosthenes(n)==true) cout << "Prime";
	else cout << "Not Prime";	
}
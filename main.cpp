#include <bits/stdc++.h>
using namespace std;
//better approach O(sqrtN)

bool sieveOfEratosthenes(int n){
	vector <bool> v(n+1,true);
	v[0]=v[1]= false;
	for(int i=2;i*i<=n;i++){
		if(v[i]){
			for(int j=i;i*j<=n;j++){
				v[i*j] = false;
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
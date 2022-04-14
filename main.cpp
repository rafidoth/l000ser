#include <bits/stdc++.h>
using namespace std;
//better approach O(sqrtN)

bool isPrime(int n){
	if(n==1 || n==0) return false;
	for(int i=2;i*i<n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}


int main(){
	int n;
	cin >> n;
	if(isPrime(n)==true) cout << "Prime";
	else cout << "Not Prime";	
}
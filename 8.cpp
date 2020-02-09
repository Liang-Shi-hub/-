#include<bits/stdc++.h>
using namespace std;
int main(){
	int x, n, m;
	cin >> x >> n >> m;
	int s = 1;
	while(n){
		if(n & 1) s = s * x % m;
		x = x * x % m;
		n >>= 1;
	} 
	cout << s << endl;
	return 0;
} 

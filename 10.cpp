#include <bits/stdc++.h>
#include <cstdio>
#include <iostream>
using namespace std;
int main(){
	freopen("debug\\10in.txt","r",stdin);   
	freopen("debug\\10out.txt","w",stdout); 
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	long long x, t, ans = 0;
	cin >> x;
	for(int i = 1; i < n; i++) {
		cin >> t;
		ans += max(t, x);    //������������������ֱȽϴ�С����������Ǹ�����ans�� 
		x = t;
	}
	printf("%lld\n", ans);
	fclose(stdin);
	fclose(stdout); 
	return 0;
}

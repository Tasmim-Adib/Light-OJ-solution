#include<bits/stdc++.h>
using namespace std;

int main(){
	//freopen("input.txt","r",stdin);
	//freopen("output.txt", "w", stdout);

	int test, caseno = 0;
	cin >> test;
	while(test--){

		int n,m;
		cin >> n >> m;

		long long cnt = n / (2*m);
		long long ans = cnt * m * m;
		printf("Case %d: %lld\n", ++caseno, ans);
	}
	return 0;
}
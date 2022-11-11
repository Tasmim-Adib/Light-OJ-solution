#include<bits/stdc++.h>
using namespace std;

int main(){

	//freopen("input.txt","r",stdin);
	//freopen("output.txt", "w", stdout);
	double arr[1000005];
	arr[0] = 0;
	for(int i = 1;i<=1000000;i++){
		arr[i] = arr[i-1] + log10(i);
	}
	int test,caseno = 0;
	cin >> test;
	while(test--){
		int n,base;
		cin >> n >> base;
		long long ans = arr[n] / (log10(base));
		printf("Case %d: %lld\n",++caseno,ans+1 );
	}
	return 0;
}
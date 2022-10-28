#include<bits/stdc++.h>
using namespace std;


int josephus(int n, int k){
	if(n == 1)
		return 1;
	else
		return (josephus(n-1, k) + k-1) % n + 1;
}


int main(){
	//freopen("input.txt","r", stdin);
	//freopen("output.txt", "w", stdout);

	int test, caseno = 0;
	cin >> test;
	while(test--){
		int n, k;
		cin >> n >> k;
		printf("Case %d: %d\n",++caseno, josephus(n,k));
	}
	return 0;
}
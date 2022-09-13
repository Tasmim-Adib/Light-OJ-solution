#include<bits/stdc++.h>
using namespace std;

int main(){
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int n,a,b,sum, caseno = 0;
	cin >> n;

	while(n--){
		cin >> a >> b;
		sum = a + b;
		printf("Case %d: %d\n", ++caseno, sum);
	}

	return 0;
}
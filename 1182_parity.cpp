#include<bits/stdc++.h>
using namespace std;

int main(){

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int test, caseno = 0;
	cin >> test;
	while(test--){
		int n, cnt = 0;
		cin >> n;
		while(n > 0){
			int x = n % 2;
			if(x == 1)
				cnt++;
			n = n / 2;
		}
		printf("Case %d: ",++caseno);
		if(cnt % 2 == 0)
			printf("even\n");
		else
			printf("odd\n");
	}

	return 0;
}
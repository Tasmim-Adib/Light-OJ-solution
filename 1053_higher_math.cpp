#include<bits/stdc++.h>
using namespace std;

int main(){

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int test, caseno = 0;
	cin >> test;
	while(test--){
		int a,b,c;
		cin >> a >> b >> c;
		unsigned long long x = a*a, y = b*b, z = c*c;
		if((x == y+z) || (y == x + z) || (z == x + y)){
			printf("Case %d: yes\n",++caseno);
		}
		else
			printf("Case %d: no\n",++caseno);
		
	}

	return 0;
}
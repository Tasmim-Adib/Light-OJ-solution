#include<bits/stdc++.h>
using namespace std;

int main(){

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int test, caseno = 0;
	cin >> test;
	while(test--){
		string a;
		long long b,r = 0;
		cin >> a >> b;
		long long len = a.length();
		for(int i = 0;i<len;i++){
			if(a[i] == '-')
				continue;
			r = (r * 10 + a[i] - '0') % b;
		}
		printf("Case %d: ",++caseno);
		if(r == 0)
			printf("divisible\n");
		else
			printf("not divisible\n");
	}
	return 0;
}
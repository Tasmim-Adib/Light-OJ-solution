#include<bits/stdc++.h>
using namespace std;

int main(){

	//freopen("input.txt","r",stdin);
	//freopen("output.txt", "w", stdout);

	int test,caseno = 0;
	cin >> test;
	while(test--){
		double a,b,c, ratio;

		cin >> a >> b >> c >> ratio;
		double s = (a + b + c) / 2;
		double ans = sqrt(ratio / (ratio + 1)) * a;
		printf("Case %d: %.10lf\n", ++caseno,ans);
	}
	return 0;
}
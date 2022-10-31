#include<bits/stdc++.h>
using namespace std;

int main(){

	freopen("input.txt","r",stdin);
	freopen("output.txt", "w", stdout);

	int test,caseno = 0;
	cin >> test;
	while(test--){
		double r;
		int n;
		cin >> r >> n;
		double theta = (2 * acos(0.0)) / n;
		double ans = (sin(theta) * r) / (1 + sin(theta));
		printf("Case %d: %.10lf\n",++caseno,ans);
	}
	return 0;
}
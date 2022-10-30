#include<bits/stdc++.h>
using namespace std;

int main(){

	//freopen("input.txt","r",stdin);
	//freopen("output.txt", "w", stdout);

	int test,caseno = 0;
	cin >> test;
	while(test--){
		double l, w, ans;
		cin >> l >> w;

		double a = 4* (l+w);
		double x1 = (a + sqrt(a*a - 48 * l *w)) / 24;
		double x2 = (a - sqrt(a*a - 48 * l *w)) / 24;

		double opt1 = 24 * x1 - 4*l - 4*w;
		double opt2 = 24 * x2 - 4*l - 4*w;

		if(opt1 < 0 && opt2 < 0){
			double p = (l - 2*x1) * (w - 2*x1) * x1;
			double q = (l - 2*x2) * (w - 2*x2) * x2;
			if(p  > q)
				ans = p;
			else
				ans = q;

		}
		else if(opt1 < 0)
			ans = (l - 2*x1) * (w - 2*x1) * x1;
		else if(opt2 < 0)
			ans = (l - 2*x2) * (w - 2*x2) * x2;

		printf("Case %d: %.10lf\n",++caseno,ans);
	}
	return 0;
}
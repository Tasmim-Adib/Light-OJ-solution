#include<bits/stdc++.h>
using namespace std;


double calculateDistance(double v, double a){
	return ((v*v) / (2*a));
}

int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int test, caseno = 0;
	cin >> test;

	while(test--){

		double v1, v2, v3, a1, a2;
		cin >> v1 >> v2 >> v3 >> a1 >> a2;

		double s1 = calculateDistance(v1, a1);
		double s2 = calculateDistance(v2, a2);
		double distance = s1 + s2;

		double t1 = (v1/a1);
		double t2 = (v2/a2);

		if(t1 >  t2)
			t2 = t1;

		double ans = v3 * t2;
		printf("Case %d: %.10lf %.10lf\n",++caseno, distance, ans);
	}
	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){

	freopen("input.txt","r",stdin);
	freopen("output.txt", "w", stdout);

	int test,caseno = 0;
	cin >> test;
	while(test--){
		double r1, r2, r3;
		cin >> r1 >> r2 >> r3;
		double a,b,c;
		a = r1 + r2;
		c = r2 + r3;
		b = r3 + r1;
		double theta = acos((a*a + b*b - c*c) / (2 *a*b));
		double areaTriangle = (a*b*sin(theta))/2;

		double theta2 = acos((a*a - b*b + c*c) / (2 *a*c));
		double theta3 = acos((b*b + c*c - a*a) / (2 *b*c));

		double area1 = (r1*r1*theta)/2;
		double area2 = (r2*r2*theta2)/ 2;
		double area3 = (r3*r3*theta3) / 2;

		double areaCircle = area1 + area2 + area3;

		double ans = areaTriangle - areaCircle;

		printf("Case %d: %.10lf\n",++caseno,ans );
	}
	return 0;
}
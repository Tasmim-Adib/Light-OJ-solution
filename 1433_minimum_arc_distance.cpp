#include<bits/stdc++.h>
using namespace std;

int main(){

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int test, caseno = 0;
	cin >> test;
	while(test--){
		double ox, oy, ax, ay, bx, by;
		cin >> ox >> oy >> ax >> ay >> bx >> by;
		double a = sqrt((ax - ox) * (ax - ox) + (ay - oy) * (ay - oy));
		double b = sqrt((bx - ox) * (bx - ox) + (by - oy) * (by - oy));
		double c = sqrt((ax - bx) * (ax - bx) + (ay - by) * (ay - by));

		double theta = acos((a*a + b*b - c*c) / (2 * a * b));
		double ans = a * theta;	

		printf("Case %d: %lf\n",++caseno, ans);
	}

	return 0;

}
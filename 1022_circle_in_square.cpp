#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int test, caseno = 0;
	cin >> test;
	while(test--){
		double r;
		cin >> r;

		double circleArea = pi * r * r;
		double squareArea = 4 * r * r;
		double ans = squareArea - circleArea;
		printf("Case %d: %.2lf\n",++caseno, ans );
	}

	return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){

	freopen("input.txt","r",stdin);
	freopen("output.txt", "w", stdout);

	int test,caseno = 0;
	cin >> test;
	while(test--){
		double ax, ay, bx, by, cx, cy;
		cin >> ax >> ay >> bx >> by >> cx >> cy;
		int dx = ax + cx - bx;
		int dy = ay + cy - by;
	
		int ans = ((ax * by + bx*cy + cx*dy + dx*ay) - (ay*bx + by*cx
			+dx*cy + dy*ax))/2; 
		printf("Case %d: %d %d %d\n",++caseno,dx,dy,abs(ans) );

	}
	return 0;
}
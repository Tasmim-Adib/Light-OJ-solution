#include<bits/stdc++.h>
using namespace std;

int main(){

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int test, caseno = 0;
	cin >> test;
	while(test--){
		int pos_lift, pos_me;
		cin >> pos_me >> pos_lift;

		int disMeLift = abs(pos_lift - pos_me);
		int ans = 4 * (disMeLift + pos_me) + 19;
		printf("Case %d: %d\n",++caseno, ans );
	}

	return 0;
}
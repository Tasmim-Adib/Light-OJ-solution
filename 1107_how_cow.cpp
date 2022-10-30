#include<bits/stdc++.h>
using namespace std;

int main(){

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int test, caseno = 0;
	cin >> test;
	while(test--){
		int x1,y1, x2,y2;
		cin >> x1 >> y1 >> x2 >> y2;
		int n;
		cin >> n;
		int x,y;
		printf("Case %d:\n",++caseno);
		while(n--){
			cin >> x >> y;
			
			if(x > x1 && x < x2 && y > y1 && y < y2)
				printf("Yes\n");
			else
				printf("No\n");
		}
	}

	return 0;
}
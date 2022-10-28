#include<bits/stdc++.h>
using namespace std;

int main(){

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int test, caseno = 0;
	cin >> test;

	while(test--){
		int n,k;
		long long total = 0;
		cin >> n;
		printf("Case %d:\n",++caseno);

		string task;
		while(n--){
			cin >> task;
			if(task == "donate"){
				cin >> k;
				total = total + k;
			}
			else if(task == "report"){
				printf("%lld\n",total);
			}
		}
	}

	return 0;
}
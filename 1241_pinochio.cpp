#include<bits/stdc++.h>
using namespace std;

int main(){

	//freopen("input.txt","r",stdin);
	//freopen("output.txt", "w", stdout);

	int test,caseno = 0;
	cin >> test;
	while(test--){
		int n,arr[55],cnt = 0,first = 2;
		cin >> n;
		for(int i = 0;i<n;i++){
			cin >> arr[i];
		}

		for(int i = 0;i<n;i++){

			int x = arr[i] - first;
			first = arr[i];
			int div = x / 5;
			if(x % 5 != 0)
				cnt++;
			cnt += div;
		}
		printf("Case %d: %d\n",++caseno,cnt );
	}
	return 0;
}
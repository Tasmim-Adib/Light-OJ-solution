#include<bits/stdc++.h>
using namespace std;
int main(){
	int test, caseno = 0;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	cin >> test;
	while(test--){
		int n,x;
		int cnt = 0, max = -1;
		cin >> n;
		int arr[1000007];
		memset(arr, 0, sizeof(arr));
		for(int i = 0;i<n;i++){
			cin >> x;
			arr[x]++;
			if(max < x)
				max = x;
		}

		for(int i = 0;i<=max;i++){
			if(arr[i] != 0){
				int num = arr[i] / (i+1);
				int rem = arr[i] % (i+1);
				cnt = cnt + (num * (i+1));
				if(rem != 0)
					cnt = cnt + i + 1;
			}	
		}

		printf("Case %d: %d\n",++caseno, cnt);
		cnt = 0;
		max = -1;
	}
	return 0;
}
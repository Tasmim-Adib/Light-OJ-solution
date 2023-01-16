#include<bits/stdc++.h>
using namespace std;
int main(){

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int test,caseno = 0;
	cin >> test;

	while(test--){
		vector<int> coins;
		int k,x,n;
		cin >> n >> k;
		coins.push_back(0);
		
		for(int i = 0;i<n;i++){
			cin >> x;
			coins.push_back(x);
		}
		int arr[102][10005];
		for(int i = 0;i<=n;i++){
			arr[i][0] = 1;
		}
		for(int i = 1;i<=k;i++){
			arr[0][i] = 0;
		}
		for(int i = 1;i<=n;i++){
			for(int j = 1;j<=k;j++){
				if(coins[i] > j){
					arr[i][j] = arr[i-1][j];
				}
				else{
					arr[i][j] = arr[i-1][j] + arr[i][j - coins[i]] % 100000007;
				}
			}
		}
		printf("Case %d: %d\n",++caseno,arr[n][k] % 100000007);
	}
	return 0;
}
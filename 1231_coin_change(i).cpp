#include<bits/stdc++.h>
using namespace std;

int n,mem[52][22][1003];
vector<int> coins,times;
int func(int i, int t,int amount){
	if(i == n){
		if(amount == 0)
			return 1;
		else
			return 0;
	}
	if(mem[i][t][amount] != -1){
		return mem[i][t][amount];
	}
	int res1 = 0, res2 = 0;

	if(t < times[i] && coins[i] <= amount){
		res2 = func(i,t+1,amount - coins[i]);
	}
	res1 = func(i+1,0,amount);
	int res = (res1 + res2) % 100000007;
	mem[i][t][amount] = res;

	return mem[i][t][amount];


}
int main(){

	freopen("input.txt","r",stdin);
	freopen("output.txt", "w", stdout);

	int test,caseno = 0;
	cin >> test;
	while(test--){
		int amount;
		cin >> n >> amount;
		int x;
		memset(mem,-1,sizeof(mem));
		coins.clear();
		times.clear();
		for(int i = 0;i<n;i++){
			cin >> x;
			coins.push_back(x);
		}
		for(int i = 0;i<n;i++){
			cin >> x;
			times.push_back(x);
		}
		int ans = func(0,0,amount);
		printf("Case %d: %d\n",++caseno,ans );
	}
	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	if(b == 0){
		return a;
	}
	return gcd(b, a % b);
}
int main(){

	//freopen("input.txt","r",stdin);
	//freopen("output.txt", "w", stdout);

	int test,caseno = 0;
	cin >> test;
	string a;

	while(test--){
		getline(cin,a);
		int n,cnt = 0;
		cin >> n;
		int x,sum = 0;
		while(n--){
			cin >> x;
			if(x >= 0){
				cnt++;
			}
			sum += abs(x);
		}
		
		if(cnt == 0){
			printf("Case %d: inf\n",++caseno);
		}
		else{
			int z = gcd(sum,cnt);
			sum = sum / z;
			cnt = cnt / z;
			printf("Case %d: %d/%d\n",++caseno,sum,cnt);
		}
	}

	return 0;
}
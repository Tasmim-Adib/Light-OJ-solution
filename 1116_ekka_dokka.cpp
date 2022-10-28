#include<bits/stdc++.h>
using namespace std;
int main(){

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int test, caseno = 0;
	cin >> test;
	while(test--){
		long long n;
		cin >> n;
		printf("Case %d: ",++caseno);
		if(n%2 !=0)
			printf("Impossible\n");
		else{
			long long div = 2,x;
			while(1){

				if(n % div == 0){
					x = n / div;
					if(x%2 != 0){
						printf("%lld %lld\n",x,div);
						break;
					}
					else
						div += 2;
				}
				else
					div += 2;
			}
		}
	}
	return 0;
}
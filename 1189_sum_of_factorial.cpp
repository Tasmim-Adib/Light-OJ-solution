#include<bits/stdc++.h>
using namespace std;

int main(){

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int test, caseNo = 0;
	long long n, fact[22];
	int res[22];

	for(int i = 0; i<=20;i++){
		fact[i] = 1;
	}

	for(int i = 1; i<=20;i++){
		fact[i] = fact[i-1] * i; 
	}

	cin >> test;
	while(test--){
		cin >> n;
		int res[22], cnt = 0;;
		for(int i=20; i>= 0; i--){
			if(n <= 0)
				break;
			if(fact[i] > n){
				continue;
			}
			else{
				n = n - fact[i];
				res[cnt] = i;
				cnt++;
			}
		}

		if(n != 0){
			printf("Case %d: impossible\n",++caseNo );
		}

		else{
			printf("Case %d: ",++caseNo );
			for(int i = cnt-1;i>=0;i--){
				if(i == 0){
					printf("%d!\n",res[i]);
				}
				else
					printf("%d!+",res[i]);
			}
		}
		
		
	}
	return 0;
}
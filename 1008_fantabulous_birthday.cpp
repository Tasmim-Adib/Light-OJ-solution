#include<bits/stdc++.h>
using namespace std;

int main(){

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int testCase, caseNo = 0;
	long long n;

	cin >> testCase;
	while(testCase--){

		cin >> n;

		double sq = sqrt(n);
		long long cl = ceil(sq);

		long long corner = (cl * cl) - (cl - 1);

		printf("Case %d: ", ++caseNo);
		if(n > corner){
			long long dif = n - corner;
			if(cl % 2 == 0){
				
				printf("%lld %lld\n", cl, cl - dif);
			}
			else{
				printf("%lld %lld\n", cl - dif, cl);
			}
		}
		else if(n < corner){
			long long dif = corner - n;
			if(cl % 2 == 0){
				printf("%lld %lld\n", cl - dif, cl);
			}
			else{
				printf("%lld %lld\n", cl, cl - dif);
			}
		}
		else{
			printf("%lld %lld\n", cl, cl);
		}
	}
	return 0;
}
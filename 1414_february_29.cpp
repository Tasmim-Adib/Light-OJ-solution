#include<bits/stdc++.h>
using namespace std;

bool isLeap(long long a){
	if(a % 400 == 0)
		return true;
	else if((a % 4 == 0) && (a % 100 !=0)){
		return true;
	}
	else
		return false;
}
int main(){

	freopen("input.txt","r",stdin);
	freopen("output.txt", "w", stdout);

	int test,caseno = 0;
	cin >> test;
	string x;
	getline(cin, x);
	while(test--){
		string startMonth,endMonth,comma;
		int startDate,endDate;
		long long startYear,endYear,ans = 0;

		cin >> startMonth >> startDate >> comma >> startYear;
		cin >> endMonth >> endDate >> comma >> endYear;
		ans = (endYear - startYear) / 4;
		printf("Case %d: %lld\n",++caseno,ans );

	}
	return 0;
}
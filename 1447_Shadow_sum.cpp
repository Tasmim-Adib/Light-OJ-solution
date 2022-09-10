#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,caseno = 0, arrSize, arr[20005],x,y,max;
	long long sum;

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	cin >> n;
	while(n--){
		max = 0;
		sum = 0;
		cin >> arrSize;

		for(int i = 0;i<20001;i++){
			arr[i] = 0;
		}

		for(int i = 0;i<arrSize;i++){
			cin >> x;
			y = abs(x);
			if(y >= max)
				max = y;
			arr[y] = x;
		}

		for(int i = 0;i<=max;i++){
			sum += arr[i];
		}

		printf("Case %d: %lld\n", ++caseno,sum);
	}

	return 0;
}
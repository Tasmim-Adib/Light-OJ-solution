#include<bits/stdc++.h>
using namespace std;

void swap(long long arr[], long long a, long long b){
	long long temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int test, n, m, casno = 0;
	
	cin >> test;
	while(test--){
		long long arr[105];
		cin >> n >> m;

		for(int i = 0;i<n;i++){
			cin >> arr[i];
		}

		while(m--){
			char a;
			long long num;
			cin >> a;
			if(a == 'S'){
				cin >> num;
				for(int i = 0;i<n;i++){
					arr[i] = arr[i] + num;
				}
			}
			else if(a == 'M'){
				cin >> num;
				for(int i = 0;i<n;i++){
					arr[i] = arr[i] * num;
				}
			}
			else if(a == 'D'){
				cin >> num;
				for(int i = 0;i<n;i++){
					arr[i] = arr[i] / num;
				}
			}

			else if(a == 'P'){
				int x,y;
				cin >> x >> y;
				swap(arr, x, y);
			}
			else if(a == 'R'){
				for(int i = 0;i<n/2;i++){
					swap(arr, i, n-1-i);
				}
				
			}
		}
		printf("Case %d:\n",++casno);

		for(int i = 0;i<n; i++){
			printf("%lld", arr[i]);
			if(i == n-1)
				printf("\n");
			else
				printf(" ");
		}
	}
	return 0;
}
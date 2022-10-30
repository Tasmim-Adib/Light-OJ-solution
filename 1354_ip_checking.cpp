#include<bits/stdc++.h>
using namespace std;

int main(){

	//freopen("input.txt","r",stdin);
	//freopen("output.txt", "w", stdout);

	int test,caseno = 0;
	cin >> test;
	while(test--){
		string a,b;
		cin >> a >> b;
		int arr[5],brr[5],cnt=0,bcnt=3,x;
		memset(arr,0,sizeof(arr));
		memset(brr,0,sizeof(brr));
		for(int i=0;i<a.length();i++){

			if(a[i] == '.'){
				cnt++;
				continue;
			}
			x = a[i] - '0';
			arr[cnt] = arr[cnt] * 10 + x; 
		}
		int mul = 1;
		for(int i = b.length() - 1;i>=0;i--){
			if(b[i] == '.'){
				bcnt--;
				mul = 1;
				continue;
			}
			x = b[i] - '0';
			brr[bcnt] = x * mul + brr[bcnt];
			mul = mul * 2;
		}
		printf("Case %d: ",++caseno );
		int g = 0;
		for(int i = 0;i<4;i++){
			if(arr[i] != brr[i]){
				g = 1;
				break;
			}
		}
		if(g == 0)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}
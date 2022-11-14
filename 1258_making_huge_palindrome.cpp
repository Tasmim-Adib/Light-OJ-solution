#include<bits/stdc++.h>
using namespace std;

int arr[1000005];

void calculateLPS(string a){
	int len = a.length();
	arr[0] = 0;
	int i = 1,j = 0;
	while(i < len){
		if(a[i] == a[j]){
			j++;
			arr[i] = j;
			i++;
		}
		else{
			if(j != 0){
				j = arr[j-1];
			}
			else{
				arr[i] = 0;
				i++;
			}
		}
	}
}

int findPalindromeLength(string a){
	int len = a.length();
	string b = a;
	reverse(b.begin(),b.end());
	int i = 0,j = 0;
	calculateLPS(b);
	while(i < len){
		if(a[i] == b[j]){
			i++;
			j++;
		}
		else{
			if(j != 0){
				j = arr[j-1];
			}
			else{
				i++;
			}
		}
	}
	return len + (len - j);

}

int main(){

	freopen("input.txt","r",stdin);
	freopen("output.txt", "w", stdout);

	int test,caseno = 0;
	cin >> test;
	while(test--){
		string a;
		memset(arr,0,sizeof(arr));
		cin >> a;
		int ans  = findPalindromeLength(a);
		printf("Case %d: %d\n", ++caseno,ans);
	}
	return 0;
}
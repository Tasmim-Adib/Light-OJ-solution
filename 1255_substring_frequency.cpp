#include<bits/stdc++.h>
using namespace std;

int arr[1000005];
void calculateLPS(string b){
	arr[0] = 0;
	int lenB = b.length();
	int i = 1,j = 0;
	while(i < lenB){
		if(b[i] == b[j]){
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


int calculateFrequency(string a, string b){
	int lenA = a.length();
	int lenB = b.length();
	int i = 0,j = 0,cnt = 0;
	while(i < lenA){
		if(a[i] == b[j]){
			i++;
			j++;
			if(j == lenB){
				cnt++;
				j = arr[j-1];
			}
		}
		else{
			if(j != 0){
				j = arr[j-1];
			}
			else
				i++;
		}
	}
	return cnt;
}
int main(){

	//freopen("input.txt","r",stdin);
	//freopen("output.txt", "w", stdout);

	int test,caseno = 0;
	cin >> test;
	while(test--){
		string a,b;
		cin >> a >> b;
		memset(arr,0,sizeof(arr));

		calculateLPS(b);
		int ans = calculateFrequency(a,b);
		printf("Case %d: %d\n",++caseno,ans );
	}
	return 0;
}

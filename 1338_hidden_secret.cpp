#include<bits/stdc++.h>
using namespace std;

int main(){

	//freopen("input.txt","r",stdin);
	//freopen("output.txt", "w", stdout);

	int test,caseno = 0;
	cin >> test;
	string y;
	getline(cin, y);
	while(test--){
		string a,b;
		int arr[30],cnt = 0,brr[30];
		getline(cin, a);
		getline(cin, b);
		memset(arr, 0, sizeof(arr));
		memset(brr, 0, sizeof(brr));
		for(int i = 0;i<a.length();i++){
			if(a[i] == ' ')
				continue;
			char x = tolower(a[i]);
			//printf("%c -> %d\n",x, int(x) - 97);
			arr[int(x) - 97]++;
 		}

 		for(int i =0;i<b.length();i++){
 			if(b[i] == ' ')
 				continue;
 			char x = tolower(b[i]);
 			brr[int(x) - 97]++;
 		}
 		for(int i = 0;i<26;i++){
 			if(arr[i] != brr[i]){
 				cnt = -1;
 				break;
 			}
 		}

 		if(cnt == -1)
 			printf("Case %d: No\n",++caseno);
 		else
 			printf("Case %d: Yes\n",++caseno);
	}
	return 0;
}
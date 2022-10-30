#include<bits/stdc++.h>
using namespace std;

int main(){

	//freopen("input.txt","r",stdin);
	//freopen("output.txt", "w", stdout);

	int test,caseno = 0;
	cin >> test;
	while(test--){
		string str, ans = "https";
		cin >> str;
		printf("Case %d: ",++caseno );
		if(str[4] == 's')
			cout << str << endl;
		else{
			for(int i = 4;i<str.length();i++){
				ans += str[i];
			}
			cout << ans << endl;
		}
	}
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){

	//freopen("input.txt","r",stdin);
	//freopen("output.txt", "w", stdout);
	int test, caseno = 0;

	cin >> test;
	while(test--){
		int n;
		string name;

		cin >> n >> name;
		printf("Case %d: ",++caseno);
		if(name == "Alice"){
			if(n % 3 == 1)
				printf("Bob\n");
			else
				printf("Alice\n");
		}

		else{
			if(n % 3 ==0)
				printf("Alice\n");
			else
				printf("Bob\n");
		}
	}
	return 0;
}
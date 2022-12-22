#include<bits/stdc++.h>
using namespace std;
int vis[20005],col[20005];
vector<int>vec[20005];

void clr(){
	memset(vis,0,sizeof(vis));
	memset(col,0,sizeof(col));
	for(int i = 0;i<20005;i++){
		vec[i].clear();
	}
}
int bfs(int x){
	queue<int> q;
	q.push(x);
	int lyk = 0, vam = 0;
	vis[x] = 1;
	col[x] = 1;
	lyk++;
	while(!q.empty()){
		int z = q.front();
		q.pop();
		for(int i = 0;i<vec[z].size();i++){
			int u = vec[z][i];

			if(vis[u] == 0){
				vis[u] = 1;
				q.push(u);
				if(col[z] == 1){
					col[u] = 2;
					vam++;
				}
				else{
					col[u] = 1;
					lyk++;
				}
			}
		}
	}
	return max(vam,lyk);
}
int main(){

	freopen("input.txt","r",stdin);
	freopen("output.txt", "w", stdout);

	int test,caseno = 0;
	cin >> test;
	while(test--){
		int n,u,v;
		clr();
		scanf("%d",&n);
		while(n--){
			scanf("%d %d",&u,&v);
			vec[u].push_back(v);
			vec[v].push_back(u);
		}
		int sum = 0;
		for(int i = 0;i<=20000;i++){
			if(vis[i] == 0 && !vec[i].empty()){
				sum += bfs(i);
			}
			
		}

		printf("Case %d: %d\n",++caseno,sum );
	}
	return 0;
}
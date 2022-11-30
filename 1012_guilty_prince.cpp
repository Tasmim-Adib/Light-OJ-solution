#include<bits/stdc++.h>
using namespace std;

char grid[23][23];
int n,m;
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
int vis[23][23];
int bfs(int sx, int sy){
	queue<int> q;
	q.push(sx);
	q.push(sy);
	int ux,uy,cnt = 1;

	vis[sx][sy] = 1;
	while(!q.empty()){
		int x = q.front();
		q.pop();
		int y = q.front();
		q.pop();

		for(int i = 0;i<4;i++){
			ux = x + dx[i];
			uy = y + dy[i];

			if(ux >= 0 && uy >= 0 && ux <= n-1 && uy <= m-1 && vis[ux][uy]
				!= 1 && grid[ux][uy] == '.'){
				vis[ux][uy] = 1;
				cnt++;
				q.push(ux);
				q.push(uy);
			}
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
		int x,y;
		memset(vis,0,sizeof(vis));
		cin >> m >> n;
		for(int i = 0;i<n;i++){
			for(int j = 0;j<m;j++){
				cin >> grid[i][j]; 
			}
		}
		
		for(int i=0;i<n;i++){
			for(int j = 0;j<m;j++){
				if(grid[i][j] == '@'){
					x = i;
					y = j;
					break;
				}
			}
		}

		int ans = bfs(x,y);
		printf("Case %d: %d\n",++caseno,ans );
	}
	return 0;
}
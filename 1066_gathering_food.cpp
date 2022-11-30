#include<bits/stdc++.h>
using namespace std;
int n,cnt;
char grid[13][13];
int vis[13][13];
int dis[13][13];
char  t;
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
int bfs(int sx,int sy,int fx, int fy){
	queue<int> q;
	q.push(sx);
	q.push(sy);
	int ux,uy;
	int ans;
	vis[sx][sy] = 1;
	dis[sx][sy] = 0;
	int lastExe = 65;
	while(!q.empty()){
		int x = q.front();
		q.pop();
		int y = q.front();
		q.pop();

		for(int i = 0;i<4;i++){
			ux = x + dx[i];
			uy = y + dy[i];

			if(ux >= 0 && uy >= 0 && ux < n && uy < n && vis[ux][uy] == 0){
				if(grid[ux][uy] == '.'){
					vis[ux][uy] = 1;
					dis[ux][uy] = dis[x][y] + 1;
					q.push(ux);
					q.push(uy);
				}
				else if((int)grid[ux][uy] == lastExe + 1){
					grid[ux][uy] = '.';
					memset(vis,0,sizeof(vis));
					while(!q.empty()){
						q.pop();
					}
					q.push(ux);
					q.push(uy);
					vis[ux][uy] = 1;
					dis[ux][uy] = dis[x][y] + 1;
					lastExe++;
					break;
				}
			}
		}
	}
	if(vis[fx][fy] == 1)
		return dis[fx][fy];
	return -1;
}
int main(){

	//freopen("input.txt","r",stdin);
	//freopen("output.txt", "w", stdout);

	int test,caseno = 0;
	cin >> test;
	while(test--){
		cnt = 0;
		int x,y,fx,fy;
		memset(vis,0,sizeof(vis));
		string a;
		getline(cin, a);
		cin >> n;
		t = 'A';
		int flag = 1;
		for(int i = 0;i<n;i++){
			for(int j = 0;j<n;j++){
				cin >> grid[i][j];
				if(grid[i][j] >= 'A' && grid[i][j] <= 'Z')
					cnt++;
				if(grid[i][j] == 'A'){
					x = i;
					y = j;
					grid[i][j] ='.';
				}
				if(grid[i][j] > t){
					flag = 0;
					t = grid[i][j];
					fx = i;
					fy = j;
				}
			}
		}
		if(flag == 1)
			printf("Case %d: 0\n",++caseno);
		else{
			int ans = bfs(x,y,fx,fy);
			if(ans == -1)
				printf("Case %d: Impossible\n",++caseno);
				
			else
				printf("Case %d: %d\n",++caseno,ans );
		}
		
	}
	return 0;
}
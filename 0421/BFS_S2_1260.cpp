#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

const int MAX = 1001;

bool bc[MAX], dc[MAX];
vector<int> vec[MAX];
void bfs(int n)
{
	queue<int> q;
	q.push(n);
	bc[n] = true;
	
	while(!q.empty())
	{
		int x = q.front();
		q.pop();
		cout << x << ' ';
			
		int size = vec[x].size();
		for(int i = 0; i < size; i++)
		{
			int y = vec[x][i];
			if(!bc[y])
			{
				bc[y] = true;
				q.push(y);
			}
		}
	}
}

void dfs(int n)
{
	cout << n << ' ';
	dc[n] = true;
	int size = vec[n].size();
	for(int i = 0; i < size; i++)
	{
		int x = vec[n][i];
		if(!dc[x]) dfs(x);
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, m, s;
	cin >> n >> m >> s;
	for(int i = 0; i < m; i++)
	{
		int x, y;
		cin >> x >> y;
		vec[x].push_back(y);
		vec[y].push_back(x);
	}
	
	for(int i = 0; i < n; i++)
		sort(vec[i].begin(), vec[i].end());
	
	dfs(s);
	cout << '\n';
	bfs(s);
	
	return 0;
}

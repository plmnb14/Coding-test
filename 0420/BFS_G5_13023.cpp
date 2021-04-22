#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

const int MAX = 1001;

// 22min
bool dc[MAX];
bool bc[MAX];
vector<int> vec[MAX];
void dfs(int n)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cout << n << ' ';
	dc[n] = true;
	int size = vec[n].size();
	for(int i = 0; i < size; i++)
	{
		int m = vec[n][i];
		if(dc[m] == false)
		{
			dfs(m);
		}
	}
}

void bfs(int n)
{
	queue<int> q;
	q.push(n);
	bc[n] = true;
	while(!q.empty())
	{
		int m = q.front();
		q.pop();
		cout << m << ' ';
		
		int size = vec[m].size();
		for(int i = 0; i < size; i++)
		{
			int x = vec[m][i];
			if(bc[x] == false)
			{
				bc[x] = true;
				q.push(x);
			}
		}
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, m, v;
	cin >> n >> m >> v;
	for(int i = 0; i < m; i++)
	{
		int x, y;
		cin >> x >> y;
		vec[x].push_back(y);
		vec[y].push_back(x);
	}
	
	for(int i = 0; i < n; i++)
	{
		sort(vec[i].begin(), vec[i].end());
	}
	
	dfs(v);
	cout << '\n';
	bfs(v);
	
	return 0;
}

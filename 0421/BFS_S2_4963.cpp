#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

const int MAX = 51;
const int CHECK = 8;

bool c[MAX][MAX];
vector<int> vec[MAX];

int dx[CHECK] = {-1,-1,0,1,1,-1,0,1};
int dy[CHECK] = {0,1,1,0,1,-1,-1,-1};

int n, m;
void bfs(int x, int y)
{
	queue<pair<int, int>> q;
	q.push(make_pair(x,y));
	c[y][x] = true;
	
	while(!q.empty())
	{
		int tx = q.front().first;
		int ty = q.front().second;
		q.pop();
		
		for(int i = 0; i < CHECK; i++)
		{
			int nx = tx + dx[i];
			int ny = ty + dy[i];
			
			if(nx >= 0 && nx < n && ny >= 0 && ny < m)
			{
				int num = vec[ny][nx];
				if(c[ny][nx] == false)
				{
					c[ny][nx] = true;
					
					if(num == 1)
					{
						q.push(make_pair(nx, ny));
					}
				}
			}
		}
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	while(true)
	{
		cin >> n >> m;
		
		if(n == 0 && m == 0)
			return 0;
		
		for(int i = 0; i < m; i++)
		{
			for(int j = 0; j < n; j++)
			{
				int x;
				cin >> x;
				vec[i].push_back(x);
			}
		}
		
		int count = 0;
		for(int i = 0; i < m; i++)
		{
			for(int j = 0; j < n; j++)
			{
				if(c[i][j] == false && vec[i][j] == 1)
				{
					bfs(j, i);
					++count;
				}
			}
		}
		
		cout << count << '\n';
		
		memset(c, false, sizeof(c));
		for(int i = 0; i < m; i++)
		{
			vec[i].clear();
		}
	}
	
	return 0;
}

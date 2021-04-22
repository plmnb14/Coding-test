#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

const int MAX = 50;
const int CHECK = 4;

int dx[CHECK] = {-1,1,0,0};
int dy[CHECK] = {0,0,-1,1};

int arr[MAX][MAX] = {0};
bool c[MAX][MAX] = {false};

int n, m, k;
void bfs(int x, int y)
{
	queue<pair<int, int>> q;
	q.push(make_pair(x, y));
	c[y][x] = true;
	
	while(!q.empty())
	{
		int nx = q.front().first;
		int ny = q.front().second;
		q.pop();
		
		for(int i = 0 ; i < CHECK; i++)
		{
			int mx = nx + dx[i];
			int my = ny + dy[i];
			
			if(mx >= 0 && mx < n && my >= 0 && my < m)
			{
				if(!c[my][mx])
				{
					c[my][mx] = true;
					
					if(arr[my][mx] == 1)
						q.push(make_pair(mx, my));
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
	
	int t;
	cin >> t;
	
	while(t--)
	{
		cin >> n >> m >> k;
		for(int i = 0; i < k; i++)
		{
			int X, Y;
			cin >> X >> Y;
			arr[Y][X] = 1;
		}
		
		int count = 0;
		for(int i = 0; i < m; i++)
		{
			for(int j = 0; j < n; j++)
			{
				if(c[i][j] == false && arr[i][j] == 1)
				{
					bfs(j, i);
					count++;
				}
			}
		}
		
		cout << count << '\n';
		
		memset(c, false, sizeof(c));
		memset(arr, 0, sizeof(arr));
	}
	
	
	
	return 0;
}

#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

const int MAX = 300;
const int CHECK = 8;

int dx[CHECK] = {1,2,1,2,-1,-2,-1,-2};
int dy[CHECK] = {2,1,-2,-1,-2,-1,2,1};

int n;
bool c[MAX][MAX] = {false};
int arr[MAX][MAX] = {0};
int bx, by, ex, ey;
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
		
		if(nx == ex && ny == ey)
		{
			cout << arr[ny][nx] << '\n';
			return;
		}
		
		for(int i = 0; i < CHECK; i++)
		{
			int mx = nx + dx[i];
			int my = ny + dy[i];
			if(mx >= 0 && mx < n && my >= 0 && my < n)
			{
				if(!c[my][mx])
				{
					c[my][mx] = true;
					arr[my][mx] = arr[ny][nx] + 1;
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
		cin >> n >> bx >> by >> ex >> ey;
		bfs(bx, by);
		memset(c, false, sizeof(c));
		memset(arr, 0, sizeof(arr));			
	}
	
	return 0;
}

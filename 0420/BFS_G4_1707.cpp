#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

// 1hour 10min
// 초기화.. 실수.. 
using namespace std;

const int MAX = 20001;

int num[MAX];
vector<int> vec[MAX];

bool bfs(int n)
{
	queue<int> q;
	q.push(n);
	num[n] = 1;
	
	while(!q.empty())
	{
		int x = q.front();
		q.pop();
		
		int size = vec[x].size();
		for(int i = 0; i < size; i++)
		{
			int y = vec[x][i];
			if(num[y] == 0)
			{
				num[y] = num[x] * -1;
				q.push(y);
			}
			
			else if(num[y] == num[x])
			{
				return false;
			}
		}
	}
	
	return true;
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
		int n, m;
		cin >> n >> m;
		
		for(int i = 0; i < m; i++)
		{
			int x, y;
			cin >> x >> y;
			vec[x].push_back(y);
			vec[y].push_back(x);
		}
		
		bool check = true;
		for(int i = 1; i <= n; i++)
		{
			if(num[i] == 0)
			{
				if(!bfs(i))
				{
					check = false;
					break;
				}
			}
		}
		
		cout << (check ? "YES" : "NO") << '\n';
		
		for(int i = 0; i <= n; i++)
		{
			num[i] = 0;
			vec[i].clear();
		}
	}
	
	return 0;
}

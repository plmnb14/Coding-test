#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int MAX = 101;

bool c[MAX];
vector<int> vec[MAX];
int bfs(int n)
{
	queue<int> q;
	q.push(n);
	c[n] = true;
	
	int count = 0;
	while(!q.empty())
	{
		int x = q.front();
		q.pop();
		
		int size = vec[x].size();
		for(int i = 0; i < size; i++)
		{
			int y = vec[x][i];
			if(c[y] == false)
			{
				c[y] = true;
				q.push(y);
				count++;
			}
		}
	}
	
	return count;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, m;
	cin >> n >> m;
	
	for(int i = 0; i < m; i++)
	{
		int x, y;
		cin >> x >> y;
		vec[x].push_back(y);
		vec[y].push_back(x);
	}
	
	cout << bfs(1) << '\n';
	
	return 0;
}

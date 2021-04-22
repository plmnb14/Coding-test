#include <iostream>
#include <queue>

//12 min
using namespace std;

const int MAX = 1001;

bool c[MAX];
vector<int> vec[MAX];

void bfs(int n)
{
	queue<int> q;
	q.push(n);
	c[n] = true;
	
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
			}
		}
	}
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
	
	int count = 0;
	for(int i = 1; i < n+1; i++)
	{
		if(c[i] == false)
		{
			bfs(i);
			count++;
		}
	}
	
	cout << count << '\n';
	
	return 0;
}

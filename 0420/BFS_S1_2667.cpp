#include <iostream>
#include <queue>

using namespace std;

const int MAX = 26;

int num[MAX][MAX]
void bfs(int n, int a, int b)
{
	queue<int> q;
	q.push(n);
	
	int num = 0;
	while(!q.empty())
	{
		int x = q.front();
		++num;
		
		if(num[i][j+1] == 1)
		{
			q.push(num[i][j+1]);
		}
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cin >> num[i][j];
		}
	}
	
	int count = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(num[i][j] == 0)
				continue;
				
			else if(num[i][j] == 1)
				bfs(num[i][j], i, j);
		}
	}
	
	return 0;
}

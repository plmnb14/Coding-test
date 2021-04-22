#include <iostream>
#include <vector>

const int MAX = 1000;

using namespace std;

vector<int> vec[MAX];
bool c[MAX];
void dfs(int n)
{
	c[n] = true;
	int size = vec[n].size();
	for(int i = 0; i < size; i++)
	{
		int x = vec[n][i];
		if(!c[x]) dfs(x);
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
	for(int i = 1; i <= n; i++)
	{
		if(!c[i])
		{
			dfs(i);
			count++;
		}
	}
	
	cout << count << '\n';
	
	return 0;
}

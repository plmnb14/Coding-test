#include <iostream>
#include <vector>

using namespace std;

// 1hour 30min
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, m;
	cin >> n >> m;
	
	vector<vector<int>> vec(n);
	for(int i = 0; i < n; i++)
	{
		vector<int> tmp(m);
		for(int j = 0; j < m; j++)
		{
			cin >> tmp[j];
		}
		vec[i] = tmp;
	}
	
	int ans = 0;
	// long stick horizontal
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m-3; j++)
		{
			int tmp = vec[i][j] + vec[i][j+1] + vec[i][j+2] + vec[i][j+3];
			if(tmp > ans) ans = tmp;
		}
	}
	
	// long stick vertical
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n-3; j++)
		{
			int tmp = vec[j][i] + vec[j+1][i] + vec[j+2][i] + vec[j+3][i];
			if(tmp > ans) ans = tmp;
		}
	}
	
	
	// square
	for(int i = 0; i < n-1; i++)
	{
		for(int j = 0; j < m-1; j++)
		{
			int tmp = vec[i][j] + vec[i][j+1] + vec[i+1][j] + vec[i+1][j+1];
			if(tmp > ans) ans = tmp;
		}
	}
	
		// pink 1, 2
	for(int i = 0; i < n-1; i++)
	{
		for(int j = 0; j < m-2; j++)
		{
			int tmp = vec[i][j] + vec[i][j+1] + vec[i+1][j+1] + vec[i][j+2];
			if(tmp > ans) ans = tmp;
			
			tmp = vec[i+1][j] + vec[i+1][j+1] + vec[i][j+1] + vec[i+1][j+2];
			if(tmp > ans) ans = tmp;
		}
	}
	
	// pink 3, 4
	for(int i = 0; i < n-2; i++)
	{
		for(int j = 0; j < m-1; j++)
		{
			int tmp = vec[i][j] + vec[i+1][j] + vec[i+1][j+1] + vec[i+2][j];
			if(tmp > ans) ans = tmp;
			
			tmp = vec[i][j+1] + vec[i+1][j+1] + vec[i+1][j] + vec[i+2][j+1];
			if(tmp > ans) ans = tmp;
		}
	}
	
		
	// green vertical
	for(int i = 0; i < n-2; i++)
	{
		for(int j = 0; j < m-1; j++)
		{
			int tmp = vec[i][j] + vec[i+1][j] + vec[i+1][j+1] + vec[i+2][j+1];
			if(tmp > ans) ans = tmp;
			
			tmp = vec[i][j+1] + vec[i+1][j+1] + vec[i+1][j] + vec[i+2][j];
			if(tmp > ans) ans = tmp;
		}
	}
	
	// green 3, 4
	for(int i = 0; i < n-1; i++)
	{
		for(int j = 0; j < m-2; j++)
		{
			int tmp = vec[i][j] + vec[i][j+1] + vec[i+1][j+1] + vec[i+1][j+2];
			if(tmp > ans) ans = tmp;
			
			tmp = vec[i][j+1] + vec[i][j+2] + vec[i+1][j] + vec[i+1][j+1];
			if(tmp > ans) ans = tmp;
		}
	}
	
	// orange 2 x 3
	for(int i = 0; i < n-2; i++)
	{
		for(int j = 0; j < m-1; j++)
		{
			int tmp = vec[i][j] + vec[i+1][j] + vec[i+2][j] + vec[i+2][j+1];
			if(tmp > ans) ans = tmp;
			
			tmp = vec[i][j] + vec[i][j+1] + vec[i+1][j+1] + vec[i+2][j+1];
			if(tmp > ans) ans = tmp;
			
			tmp = vec[i][j] + vec[i+1][j] + vec[i+2][j] + vec[i][j+1];
			if(tmp > ans) ans = tmp;
			
			tmp = vec[i+2][j] + vec[i+2][j+1] + vec[i+1][j+1] + vec[i][j+1];
			if(tmp > ans) ans = tmp;
		}
	}
	
	// orange 3 x2
	for(int i = 0; i < n-1; i++)
	{
		for(int j = 0; j < m-2; j++)
		{
			int tmp = vec[i][j] + vec[i][j+1] + vec[i][j+2] + vec[i+1][j];
			if(tmp > ans) ans = tmp;
			
			tmp = vec[i+1][j] + vec[i+1][j+1] + vec[i+1][j+2] + vec[i][j+2];
			if(tmp > ans) ans = tmp;
			
			tmp = vec[i][j] + vec[i+1][j] + vec[i+1][j+1] + vec[i+1][j+2];
			if(tmp > ans) ans = tmp;
			
			tmp = vec[i][j] + vec[i][j+1] + vec[i][j+2] + vec[i+1][j+2];
			if(tmp > ans) ans = tmp;
		}
	}
	
	
	
	cout << ans << '\n';
	
	return 0;
}

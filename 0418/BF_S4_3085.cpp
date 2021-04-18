#include <iostream>
#include <vector>

using namespace std;

int check(vector<string>& v, int a, int b, int c, int d)
{
	int n = v.size();
	int ans = 1;
	for(int i = a; i <= b; i++)
	{
		int cnt = 1;
		for(int j = 1; j <n; j++)
		{
			if(v[i][j] == v[i][j-1])
			{
				cnt += 1;
			}
			else
			{
				cnt = 1;
			}
			
			if(cnt > ans) ans = cnt;
		}
	}
	
	for(int i = c; i <= d; i++)
	{
		int cnt = 1;
		for(int j = 1; j <n; j++)
		{
			if(v[j][i] == v[j-1][i])
			{
				cnt += 1;
			}
			else
			{
				cnt = 1;
			}
			
			if(cnt > ans) ans = cnt;
		}
	}
	
	return ans;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	
	vector<string> board(n);
	for(int i = 0; i < n; i++)
	{
		cin >> board[i];
	}
	
	int ans = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(j+1 < n)
			{
				//Horizontal
				swap(board[i][j], board[i][j+1]);
				int tmp = check(board, i, i, j, j+1);
				ans = ans > tmp ? ans : tmp;
				swap(board[i][j], board[i][j+1]);					
			}
			
			if(i+1 < n)
			{
				//Vertical
				swap(board[i][j], board[i+1][j]);
				int tmp = check(board, i, i+1, j, j);
				ans = ans > tmp ? ans : tmp;
				swap(board[i][j], board[i+1][j]);					
			}
		}
	}
	
	cout << ans << '\n';
	
	return 0;
}

#include <iostream>

using namespace std;

const int MAX = 4;

int dx[MAX] = {-1,1,0,0};
int dy[MAX] = {0,0,-1,1};

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int r, c;
	cin >> r >> c;
	string s[r];
	cin.ignore();
	
	for(int i = 0; i < r; i++)
	{
		getline(cin, s[i]);
	}
	
	for(int i = 0; i < r; i++)
	{
		for(int j = 0; j < c; j++)
		{
			if(s[i][j] == 'W')
			{
				for(int k = 0; k < MAX; k++)
				{
					int m = i + dy[k];
					int n = j + dx[k];
			
					if(n >= 0 && n < c && m >= 0 && m < r)
					{
						if(s[m][n] == '.')
						{
							s[m][n] = 'D';
						}
				
						else if(s[m][n] == 'S')
						{
							cout << 0 << '\n';
							return 0;
						}
					}			
				}
			}
		}
	}

	cout << 1 << '\n';
	for(int i = 0; i < r; i++)
	{
		cout << s[i] << '\n';
	}
	
	return 0;
}

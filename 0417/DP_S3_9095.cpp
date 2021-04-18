#include <iostream>

using namespace std;

int d[11];

// 8min
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin >> t;
	
	d[0] = 1;
	d[1] = 1;
	d[2] = 2;
	while(t--)
	{
		int n;
		cin >> n;
		
		for(int i = 3; i <= n; i++)
		{
			d[i] = d[i-3] + d[i-2] + d[i-1];
		}
		
		cout << d[n] << '\n';
	}
	
	return 0;
}

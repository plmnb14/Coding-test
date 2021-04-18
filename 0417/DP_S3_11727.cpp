#include <iostream>

using namespace std;

int d[1001];

// 7min 
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;

	d[1] = 1;
	d[2] = 3;
	for(int i = 3; i <= n; i++)
	{
		d[i] = (d[i-2] * 2 + d[i-1]) % 10007;
	}
	
	cout << d[n] << '\n';
	 
	return 0;
}

#include <iostream>

using namespace std;

int d[1000001] = {0};

// 다시 한번 풀어보기 
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	
	d[1] = 0;
	for(int i = 2; i <= n; i++)
	{
		d[i] = d[i-1] + 1;
		
		if(i%2 == 0 && d[i] > d[i/2] + 1)
		{
			d[i] = d[i/2] + 1;
		}
		
		if(i%3 == 0 && d[i] > d[i/3] + 1)
		{
			d[i] = d[i/3] + 1;
		}
	}
	
	cout << d[n] << '\n';
	
	return 0;
}

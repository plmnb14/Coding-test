#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool broken[10];
int possible(int n)
{
	if(n == 0)
		return broken[0] ? 0 : 1;
	
	int len = 0;
	while(n > 0)
	{
		if(broken[n % 10])
			return 0;
		
		len += 1;
		n /= 10;
	}
	
	return len;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	
	int m;
	cin >> m;
	for(int i = 0; i < m; i++)
	{
		int tmp;
		cin >> tmp; 
		broken[tmp] = true;
	}
	
	int cur = 100;
	int count = cur > n ? cur - n : n - cur;
	
	for(int i = 0; i <= 1000000; i++)
	{
		int c = i;
		int len = possible(c);
		if(len > 0)
		{
			int press = c < n ? n - c : c - n;
			if(count > len + press)
				count = len + press;
		}
	}
	
	cout << count << '\n';
	
	return 0;
}

#include <iostream>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, k;
	cin >> n >> k;
	
	int count = 0;
	while(true)
	{
		if(n <= 1)
			break;
		
		if(0 == n % k)
		{
			n /= k;
		}
		
		else
		{
			n -= 1;
		}
		
		count++;
	}
	
	cout << count << '\n';
	
	return 0;
}

// 3Ка 30УЪ 

#include <iostream>
#include <vector>

using namespace std;

// 17min 
int gcd(int a, int b)
{
	if(b == 0)
		return a;
		
	return gcd(b, a%b);
}

int main(void)
{
	int n;
	cin >> n;
	
	while(n--)
	{
		int m;
		cin >> m;
		
		vector<int> vec(m);
		for(int i = 0; i < m; i++)
		{
			cin >> vec[i];
		}
		
		long long answer = 0;
		for(int i = 1; i < m; i++)
		{
			for(int j = i; j < m; j++)
			{
				answer += gcd(vec[i-1], vec[j]);
			}
		}
		
		cout << answer << '\n';
	}
	
	return 0;
}

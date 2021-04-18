#include <iostream>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, m;
	cin >> n >> m;
	
	int result = 0;
	for(int i = 0; i < n; i++)
	{
		// 주어지는 수가 10000까지이기에, 최소값의 값을 10001로 넣어주었다. 
		int min = 10001;
		for(int j = 0; j < m; j++)
		{
			// 입력하면서 값을 받아서, 
			int x;
			cin >> x;
			
			// 조건 검사 
			if(x < min)
			{
				min = x;
			}
		}
		
		if(min > result)
		{
			result = min;
		}
	}
	
	cout << result << '\n';
	
	return 0;
}

// 10분; 

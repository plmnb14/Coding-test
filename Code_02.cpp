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
		// �־����� ���� 10000�����̱⿡, �ּҰ��� ���� 10001�� �־��־���. 
		int min = 10001;
		for(int j = 0; j < m; j++)
		{
			// �Է��ϸ鼭 ���� �޾Ƽ�, 
			int x;
			cin >> x;
			
			// ���� �˻� 
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

// 10��; 

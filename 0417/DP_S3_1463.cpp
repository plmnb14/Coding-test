#include <iostream>

using namespace std;

int data[1000001] = {0};

// �ٽ� �ѹ� Ǯ��� 
int main(void)
{
	int n;
	cin >> n;
	
	int count = 0;
	while(n != 1)
	{
		cout << "current n : " << n << '\n';
		
		if(n % 3 == 0)
		{
			n /= 3;
		}
		
		else if(n % 2 == 0)
		{
			n /= 2;
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

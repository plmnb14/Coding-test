#include <iostream>

using namespace std;

int data[1000001] = {0};

// 다시 한번 풀어보기 
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

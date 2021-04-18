#include <iostream>
#include <stack>

using namespace std;

// 38Ка 
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	
	string str;
	
	bool wrong = false;
	int maxIdx = 0;
	stack<int> s;
	while(n--)
	{
		int m;
		cin >> m;
		
		if(m > maxIdx)
		{
			while(m > maxIdx)
			{
				s.push(++maxIdx);
				str += '+';
			}
			
			s.pop();
			str += '-';
		}
		
		else if(s.top() == m)
		{
			s.pop();
			str += '-';
		}
		
		else if(s.top() > m)
		{
			wrong = true;
		}
	}
	
	if(wrong)
	{
		cout << "NO" << '\n';
	}
	
	else
	{
		for(auto c : str)
		{
			cout << c << '\n';
		}
	}
	
	return 0;
}

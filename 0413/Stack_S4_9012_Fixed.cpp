#include <iostream>
#include <stack>

using namespace std;

// 18 min
// stack 카운팅으로 다시풀어보자
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin >> t;
	cin.ignore();
	
	while(t--)
	{
		string str;
		stack<char> s;
		getline(cin, str);
		bool isVPS = true;
		
		for(char c : str)
		{
			if(c == '(')
			{
				s.push((c));
			}
			
			else
			{
				if(!s.empty())
				{
					s.pop();
				}
				
				else
				{
					isVPS = false;
					break;
				}
			}
		}
		
		if(isVPS)
		{
			if(s.empty())
			{
				cout << "YES" << '\n';
			}
			
			else
			{
				cout << "NO" << '\n';
			}
		}
		
		else
		{
			cout << "NO" << '\n';
		}
	}
	
	
	return 0;
}

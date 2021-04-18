#include <iostream>
#include <stack>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	cin.ignore();
	
	while(n--)
	{
		string str;
		stack<char> s;
		getline(cin, str);
		str += '\n';
		
		// for(auto : container) 처럼 이용하는 것이다.  
		for(char c : str)
		{
			// 띄어쓰기나, 개행일 경우 
			if(c == ' ' || c == '\n')
			{
				// 이미 채워져 있는 것을 출력하고, 삭제한다. 
				while(!s.empty())
				{
					cout << s.top();
					s.pop();
				}
				
				// 출력 
				cout << c;
			}
			
			else
			{
				s.push(c);
			}
		}
	}
	
	return 0;
}

// 12분 

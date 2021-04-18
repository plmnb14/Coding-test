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
		
		// for(auto : container) ó�� �̿��ϴ� ���̴�.  
		for(char c : str)
		{
			// ���⳪, ������ ��� 
			if(c == ' ' || c == '\n')
			{
				// �̹� ä���� �ִ� ���� ����ϰ�, �����Ѵ�. 
				while(!s.empty())
				{
					cout << s.top();
					s.pop();
				}
				
				// ��� 
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

// 12�� 

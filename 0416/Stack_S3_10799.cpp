#include <iostream>
#include <stack>

using namespace std;

// 30 min 
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string str;
	cin >> str;
	
	int result = 0;
	stack<int> s;
	int size = str.size();
	for(int i = 0; i < size; i++)
	{
		if(str[i] == '(')
		{
			s.push(i);
		}
		
		else
		{

			if(s.top() + 1 == i)
			{
				s.pop();
				result += s.size();
			}
			else
			{
				s.pop();
				result += 1;				
			}
		}
	}
	
	cout << result << '\n';
	
	return 0;
}

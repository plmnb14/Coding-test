#include <iostream>
#include <stack>

using namespace std;

// 43min
int main(void)
{
	string str;
	getline(cin, str);
	
	string answer;
	stack<char> reverse;
	for(int i = 0; i < str.length(); i++)
	{
		if(str[i] == '<')
		{
			if(!reverse.empty())
			{
				while(!reverse.empty())
				{
					answer += reverse.top();
					reverse.pop();
				}
			}
			
			while(str[i] != '>')
			{
				answer += str[i++];
			}
			
			answer += str[i];
		}
		
		else
		{
			if(str[i] == ' ' || i == str.length() - 1)
			{
				if(str[i] == str.back())
					reverse.push(str[i]);
				
				if(!reverse.empty())
				{
					while(!reverse.empty())
					{
						answer += reverse.top();
						reverse.pop();
					}
				}
				
				if(str[i] == ' ')
					answer += str[i];
			}
			
			else
			{
				reverse.push(str[i]);
			}
		}
	}
	
	cout << answer << '\n';
	
	return 0;
}

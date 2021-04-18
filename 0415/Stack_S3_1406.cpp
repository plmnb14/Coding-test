#include <iostream>
#include <stack>

using namespace std;

// 16Ка 
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string str;
	cin >> str;
	
	int n;
	cin >> n;
	cin.ignore();
	
	stack<char> Left, Right;
	
	for(auto iter : str)
	{
		Left.push(iter);
	}
	
	while(n--)
	{
		string order;
		getline(cin, order);
		
		if(order.front() == 'L')
		{
			if(!Left.empty())
			{
				Right.push(Left.top());
				Left.pop();
			}
		}
		
		else if(order.front() == 'D')
		{
			if(!Right.empty())
			{
				Left.push(Right.top());
				Right.pop();
			}
		}
		
		else if(order.front() == 'B')
		{
			if(!Left.empty())
			{
				Left.pop();
			}
		}
		
		else if(order.front() == 'P')
		{
			char tmp = order.back();
			Left.push(tmp);
		}
	}
	
	while(!Left.empty())
	{
		Right.push(Left.top());
		Left.pop();
	}
		
	while(!Right.empty())
	{
		cout << Right.top();
		Right.pop();
	}
	
	
	return 0;
} 

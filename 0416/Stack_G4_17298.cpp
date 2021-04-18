#include <iostream>
#include <stack>
#include <vector>

using namespace std;

// 다시 풀어보기!! 
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	
	vector<int> vec(n);
	vector<int> ans(n);
	
	for(int i = 0; i < n; i++)
	{
		cin >> vec[i];
	}
	
	stack<int> s;
	s.push(0);
	for(int i = 1; i < n; i++)
	{
		if(s.empty())
		{
			s.push(i);
		}
		
		while(!s.empty() && vec[s.top()] < vec[i])
		{
			ans[s.top()] = vec[i];
			s.pop();
		}
		
		s.push(i);
	}
	
	while(!s.empty())
	{
		ans[s.top()] = -1;
		s.pop();
	}
	
	for(int i = 0; i < n; i++)
	{
		cout << ans[i] << ' ';
	}
	
	return 0;
}

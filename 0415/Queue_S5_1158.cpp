#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, k;
	cin >> n >> k;
	
	queue<int> q;
	for(int i = 1; i <= n; i++)
	{
		q.push(i);
	}
	
	queue<int> answer;
	int count = 1;
	while(!q.empty())
	{
		if(count < k)
		{
			int m = q.front();
			q.pop();
			q.push(m);
			++count;
		}
		
		else
		{
			count = 1;
			answer.push(q.front());
			q.pop();
		}
	}
	
	cout << "<";
	while(!answer.empty())
	{
		cout << answer.front();
		answer.pop();
		if(!answer.empty())
		{
			cout << ", ";
		}
	}
	cout << ">";
	
	return 0;
}

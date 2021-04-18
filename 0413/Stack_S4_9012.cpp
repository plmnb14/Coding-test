#include <iostream>
#include <stack>

using namespace std;

// 18 min
// stack 카운팅으로 다시풀어보자

string CheckString(string s)
{
	int cnt = 0;
	int size = s.length();
	for(int i = 0; i < size; i++)
	{
		if(s[i] == '(')
		{
			++cnt;
		}
		else
		{
			--cnt;
			if(cnt < 0)
			{
				return "NO";
			}
		}
	}
	
	return cnt == 0 ? "YES" : "NO"; 
} 

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
		getline(cin, str);
		
		cout << CheckString(str) << '\n';
	}
	
	
	return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX = 9;
const int TALL = 100;

// 13min
bool compare(int a, int b)
{
	return a < b;	
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int add = 0;
	vector<int> vec();
	for(int i = 0; i < MAX; i++)
	{
		cin >> vec[i];
		add += vec[i];
	}
	
	sort(vec.begin(), vec.end(), compare);
	
	int ans = 0;
	for(int i = 0; i < MAX; i++)
	{
		for(int j = i+1; j < MAX; j++)
		{
			if(add - vec[i] - vec[j] == TALL)
			{
				for(auto iter : vec)
				{
					if(iter != vec[i] && iter != vec[j])
					{
						cout << iter << '\n';
					}
				}
				
				return 0;
			}
		}
	}
	
	return 0;	
}

#include <iostream>
#include <vector>

using namespace std;

// 14min
int gcd(int a, int b)
{
	if(b == 0)
		return a;
		
	return gcd(b, a%b);
}

int gap(int a, int b)
{
	return a > b ? a - b : b - a;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N, S;
	cin >> N >> S;
	
	// O(N) 
	vector<int> vec(N);
	for(int i = 0; i < N; i++)
	{
		cin >> vec[i];
		vec[i] = gap(vec[i], S);
	}
	
	int ans = vec[0];
	for(int i = 1; i < N; i++)
	{
		ans = gcd(ans, vec[i]);
	}
	
	cout << ans << '\n';
	
	return 0;
}

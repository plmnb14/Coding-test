#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int n, int m)
{
	return m < n;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, m, k;
	cin >> n >> m >> k;
	
	vector<int> vec;
	for(int i = 0; i < n; i++)
	{
		int tmp = 0;
		cin >> tmp;
		vec.push_back(tmp);	
	}
	
	sort(vec.begin(), vec.end(), compare);
	
	// �����ϰ� �ݺ����� ���� ���� �ƴ϶�
	// �ݺ��Ǵ� ������ �ִ��� �ľ��ؼ�, ������ �ּ�ȭ����. 
	int bigCount = (m / (k + 1)) * k;
	bigCount += m % (k + 1);
	
	int result = bigCount * vec[0];
	result += (m - bigCount) * vec[1];
	
	cout << result << '\n';
	
	return 0;
}

// 14��
 

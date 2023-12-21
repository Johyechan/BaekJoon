#include <iostream>
#include <vector>
#include <algorithm>

// 백준 아님 그냥 문제

using namespace std;

int main()
{
	vector<int> v;
	int n, k, answer = INT_MAX, answer2 = 0;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		v.push_back(num);
	}
	for (int i = 0; i < v.size(); i++)
	{
		if (abs(k - v[i]) < answer)
		{
			answer = abs(k - v[i]);
			answer2 = v[i];
		}
	}
	cout << answer2;
}
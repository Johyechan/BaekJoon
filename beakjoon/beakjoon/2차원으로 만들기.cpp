#include <iostream>
#include <vector>
// 백준 아님 그냥 문제

using namespace std;

int main()
{
	vector<int> v;
	int n, k, check = 0;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		v.push_back(num);
	}
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
		check++;
		if (check == k)
		{
			cout << '\n';
			check = 0;
		}
	}
}
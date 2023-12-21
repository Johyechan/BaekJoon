#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;
	int n, k, i = 0, countnum = 0;
	cin >> n >> k;
	v.resize(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	for (int i = v.size() - 1; i >= 0; i--)
	{
		if (k == 0)
			break;
		if (v[i] <= k)
		{
			countnum += k / v[i];
			k = k % v[i];
		}
	}
	cout << countnum;
}
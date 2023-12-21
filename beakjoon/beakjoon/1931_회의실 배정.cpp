#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<pair<int, int>> v;
	int n;
	int lastT = 0, answer = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int n1, n2;
		cin >> n1 >> n2;
		v.push_back({ n2, n1 });
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i].second < lastT) continue;
		answer++;
		lastT = v[i].first;
	}
	cout << answer;
}
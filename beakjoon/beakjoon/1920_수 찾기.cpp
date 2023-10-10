#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// ½Ç¹ö 4



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> v1;
	vector<int> v2;
	int N, M, left = 0, right = 0, mid = 0;
	bool isin = false;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		v1.push_back(num);
	}
	sort(v1.begin(), v1.end());

	cin >> M;
	for (int i = 0; i < M; i++)
	{
		int num;
		cin >> num;
		v2.push_back(num);
	}

	for (int i = 0; i < v2.size(); i++)
	{
		isin = false;
		right = v1.size() - 1;
		left = 0;
		while (left <= right)
		{
			mid = (left + right) / 2;
			if (v2[i] == v1[mid])
			{
				isin = true;
				break;
			}
			else if (v2[i] > v1[mid])
				left = mid + 1;
			else
				right = mid - 1;
		}
		if (isin)
			cout << "1" << "\n";
		else
			cout << "0" << "\n";
	}
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// ½Ç¹ö 5

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	long long N = 1, M = 1, answer = 0;
	while (true)
	{
		cin >> N >> M;
		if (N == 0 && M == 0)
			break;
		vector<long long> v1;
		vector<long long> v2;
		v1.resize(N);
		v2.resize(M);
		for (int i = 0; i < N; i++)
		{
			int num;
			cin >> v1[i];
		}
		for (int i = 0; i < M; i++)
		{
			int num;
			cin >> v2[i];
		}
		sort(v2.begin(), v2.end());
		for (int i = 0; i < v1.size(); i++)
		{
			long long left = 0;
			long long right = v2.size() - 1;
			while (left <= right)
			{
				long long mid = (left + right) / 2;
				if (v1[i] == v2[mid])
				{
					answer++;
					break;
				}
				else if (v1[i] > v2[mid])
					left = mid + 1;
				else
					right = mid - 1;
			}
		}
		cout << answer << '\n';
		answer = 0;
	}
}
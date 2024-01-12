#include <iostream>
#include <vector>

using namespace std;

// ∫Í∑–¡Ó 2

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	vector<vector<long long>> v;
	long long N, M, k1 = 0;
	cin >> N >> M;
	v.resize(N, vector<long long>(2));
	for (long long i = 0; i < M; i++)
	{
		long long k, s, e;
		cin >> k >> s >> e;
		if (i == 0)
		{
			cout << "YES" << '\n';
			v[k - 1][0] = s;
			v[k - 1][1] = e;
		}
		else
		{
			if (v[k - 1][0] == 0)
			{
				cout << "YES" << '\n';
				v[k - 1][0] = s;
				v[k - 1][1] = e;
			}
			else if (v[k - 1][1] <= s)
			{
				cout << "YES" << '\n';
				v[k - 1][0] = s;
				v[k - 1][1] = e;
			}
			else
			{
				cout << "NO" << '\n';
			}
		}
	}
}
#include <iostream>
#include <vector>
using namespace std;

// °ñµå 5

long long dp[101][10001] = {0};
vector<long long> num;

int main()
{
	long long n, k;
	cin >> n >> k;
	num.resize(n);
	fill_n(dp, 101 * 10001, 1);
	for (long long i = 0; i < n; i++)
	{
		cin >> num[i];
	}
	for (long long i = 1; i <= k; i++)
	{
		for (long long j = 0; j < num.size(); j++)
		{
			if (i - num[j] >= 0)
				dp[i][j] = dp[i - 1][j] + dp[i][i - num[j]];
		}
	}
	cout << dp[n][k];
}
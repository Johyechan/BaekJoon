#include <iostream>

using namespace std;

// ½Ç¹ö 3

long long dp[1000001] = { 0 };

int main()
{
	long long n;
	cin >> n;
	for (long long i = 2; i <= n; i++)
	{
		dp[i] = 1 + dp[i - 1];
		if (i % 3 == 0)
			dp[i] = min(dp[i], 1 + dp[i / 3]);
		if (i % 2 == 0)
			dp[i] = min(dp[i], 1 + dp[i / 2]);
	}
	cout << dp[n];
}
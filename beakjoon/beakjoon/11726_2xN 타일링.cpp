#include <iostream>

using namespace std;

int main()
{
	long long dp[1001] = { 1, 1 };
	long long n;
	cin >> n;
	if (n >= 2)
	{
		for (long long i = 2; i <= n; i++)
		{
			dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;
		}
	}
	cout << dp[n];
}
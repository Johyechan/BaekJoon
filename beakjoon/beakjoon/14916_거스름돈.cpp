#include <iostream>

using namespace std;

// ½Ç¹ö 5

int dp[100001];

int main()
{
	fill_n(dp, 100001, -1);
	int change;
	cin >> change;
	dp[0] = -1;
	dp[1] = -1;
	dp[2] = 1;
	dp[3] = -1;
	dp[4] = 2;
	dp[5] = 1;
	dp[6] = 3;
	dp[7] = 2;
	dp[8] = 4;
	for (int i = 9; i <= change; i++)
	{
		dp[i] = dp[i - 5] + 1;
	}
	cout << dp[change];
}
#include <iostream>

using namespace std;

// ∫Í∑–¡Ó 1

long long dp[91] = { 0,1,1 };

void Fido(int n)
{
	for (int i = 3; i <= n; i++)
	{
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	cout << dp[n];
}

int main()
{
	int n;
	cin >> n;
	Fido(n);
}
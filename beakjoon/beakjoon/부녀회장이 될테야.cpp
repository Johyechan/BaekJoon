#include <iostream>
using namespace std;

int dp[101][15];

int main() {
    int t;
    cin >> t;

    while (t--) {
        int k, n;
        cin >> k >> n;

        for (int i = 0; i <= k; i++) {
            for (int j = 1; j <= n; j++) {
                if (i == 0) {
                    dp[0][j] = j;
                }
                else if (j == 1) {
                    dp[i][1] = 1;
                }
                else {
                    dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
                }
            }
        }
        cout << dp[k][n] << "\n";
    }
}
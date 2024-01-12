#include <iostream>

using namespace std;

// ∫Í∑–¡Ó 1

long long f[41];
long long answer1 = 0, answer2 = 0;

int fib(int n) {
    if (n == 1 || n == 2)
    {
        answer1++;
        return 1;
    }
    else
        return (fib(n - 1) + fib(n - 2));
}

int fibonacci(int n) {
    answer2++;
    f[1] = f[2] = 1;
    for (int i = 3; i < n; i++)
    {
        answer2++;
        f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
}


int main()
{
    int n;
    cin >> n;
    fib(n);
    fibonacci(n);
    cout << answer1 << ' ' << answer2;
}
#include<iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	if (N == 1)
	{
		cout << "";
	}
	else
	{
		for (int i = 2; i <= N; i++)
		{
			while (N % i == 0)
			{
				N /= i;
				cout << i << "\n";
			}
		}
	}
	
	return 0;
}
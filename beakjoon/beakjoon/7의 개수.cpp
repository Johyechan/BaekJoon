#include <iostream>

// 백준 아님 그냥 문제

using namespace std;

int main()
{
	int n, temp = 0, answer = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num; 
		cin >> num;
		temp = num;
		if (temp >= 10)
		{
			while (temp > 10)
			{
				if (temp % 10 == 7)
				{
					answer++;
				}
				temp /= 10;
			}
		}
		if (temp == 7)
		{
			answer++;
		}
	}
	cout << answer;
}
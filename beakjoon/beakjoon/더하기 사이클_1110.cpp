#include<iostream>

using namespace std;

int main()
{
	int n;
	int check = 100;
	int answer = 0;

	cin >> n;

	while (n != check)
	{
		if (answer == 0)
		{
			if (n < 10)
			{
				check = (n * 10) + n;
			}
			else
			{
				int value1 = (n % 10) * 10;
				int value2 = ((n / 10) + (n % 10)) % 10;
				check = value1 + value2;
			}
		}
		else
		{
			if (check < 10)
			{
				check = (check * 10) + check;
			}
			else
			{
				int value1 = (check % 10) * 10;
				int value2 = ((check / 10) + (check % 10)) % 10;
				check = value1 + value2;
			}
		}

		answer++;
	}

	cout << answer;
	return 0;
}
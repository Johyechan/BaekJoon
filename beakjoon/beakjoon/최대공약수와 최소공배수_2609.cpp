#include<iostream>

using namespace std;

int main()
{
	int num1, num2;
	int gcd, lcm;
	int temp, temp1;
	cin >> num1 >> num2;

	temp1 = num1 * num2;

	if (num1 > num2)
	{
		while (num2 != 0)
		{
			temp = num1 % num2;
			num1 = num2;
			num2 = temp;
		}
		gcd = num1;
	}
	else if (num1 < num2)
	{
		while (num1 != 0)
		{
			temp = num2 % num1;
			num2 = num1;
			num1 = temp;
		}
		gcd = num2;
	}
	else
	{
		gcd = num1;
	}
	
	lcm = temp1 / gcd;

	cout << gcd << "\n";
	cout << lcm << "\n";

	return 0;
}
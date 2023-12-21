#include <iostream>
#include <string>
// 백준 아님 그냥 문제

using namespace std;

int main()
{
	string arr[10] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "zero" };
	string s, temps = "";
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		temps += s[i];

		if (temps == arr[0])
		{
			cout <<  "1";
			temps = "";
		}
		else if (temps == arr[1])
		{
			cout << "2";
			temps = "";
		}
		else if (temps == arr[2])
		{
			cout << "3";
			temps = "";
		}
		else if (temps == arr[3])
		{
			cout << "4";
			temps = "";
		}
		else if (temps == arr[4])
		{
			cout << "5";
			temps = "";
		}
		else if (temps == arr[5])
		{
			cout << "6";
			temps = "";
		}
		else if (temps == arr[6])
		{
			cout << "7";
			temps = "";
		}
		else if (temps == arr[7])
		{
			cout << "8";
			temps = "";
		}
		else if (temps == arr[8])
		{
			cout << "9";
			temps = "";
		}
		else if (temps == arr[9])
		{
			cout << "0";
			temps = "";
		}
	}
}
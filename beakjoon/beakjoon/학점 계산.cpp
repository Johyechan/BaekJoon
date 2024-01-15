#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	cin >> s;
	switch (s[0])
	{
	case 'A':
	{
		if (s[1] == '+')
		{
			cout << "4.3";
		}
		else if (s[1] == '0')
		{
			cout << "4.0";
		}
		else if (s[1] == '-')
		{
			cout << "3.7";
		}
	}
	break;
	case 'B':
	{
		if (s[1] == '+')
		{
			cout << "3.3";
		}
		else if (s[1] == '0')
		{
			cout << "3.0";
		}
		else if (s[1] == '-')
		{
			cout << "2.7";
		}
	}
	break;
	case 'C':
	{
		if (s[1] == '+')
		{
			cout << "2.3";
		}
		else if (s[1] == '0')
		{
			cout << "2.0";
		}
		else if (s[1] == '-')
		{
			cout << "1.7";
		}
	}
	break;
	case 'D':
	{
		if (s[1] == '+')
		{
			cout << "1.3";
		}
		else if (s[1] == '0')
		{
			cout << "1.0";
		}
		else if(s[1] == '-')
		{
			cout << "0.7";
		}
	}
	break;
	case 'F':
	{
		cout << "0.0";
	}
	break;
	default:
		break;
	}
}
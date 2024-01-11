#include <iostream>
#include <string>

using namespace std;

// ºê·ÐÁî 2

int main()
{
	string s;
	string s2 = "";
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		if (s2 == "" || s2.back() == 'A')
		{
			if (s[i] == 'K')
			{
				s2.push_back(s[i]);
			}
		}
		else if (s2.back() == 'K')
		{
			if (s[i] == 'O')
			{
				s2.push_back(s[i]);
			}
		}
		else if (s2.back() == 'O')
		{
			if (s[i] == 'R')
			{
				s2.push_back(s[i]);
			}
		}
		else if (s2.back() == 'R')
		{
			if (s[i] == 'E')
			{
				s2.push_back(s[i]);
			}
		}
		else if (s2.back() == 'E')
		{
			if (s[i] == 'A')
			{
				s2.push_back(s[i]);
			}
		}
	}

	cout << s2.size();
}
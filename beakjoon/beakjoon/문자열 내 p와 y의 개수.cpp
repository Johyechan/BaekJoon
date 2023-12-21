#include <iostream>
#include <string>

// 백준 아님 그냥 문제

using namespace std;

int main()
{
	int p = 0, y = 0;
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'p')
			p++;
		if (s[i] == 'y')
			y++;
	}
	if (p == y)
		cout << "true";
	else if (p == 0 && y == 0)
		cout << "true";
	else
		cout << "false";
}
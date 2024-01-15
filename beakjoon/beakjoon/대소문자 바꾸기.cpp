#include <iostream>
#include <string>

using namespace std;

// ºê·ÐÁî 5

int main()
{
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] = tolower(s[i]);
		}
		else if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = toupper(s[i]);
		}
	}
	cout << s;
}
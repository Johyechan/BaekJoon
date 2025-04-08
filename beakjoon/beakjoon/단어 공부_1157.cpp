#include <iostream>
#include <string>
#include <map>

using namespace std; 

int main()
{
	string s;
	map<char, int> map;
	char checkChar = 'a';
	int checkInt = 0;
	bool isDouble = false;

	cin >> s;

	for (int i = 0; i < s.size(); i++)
	{
		char upperChar = toupper(static_cast<unsigned char>(s[i]));
		if (map.find(upperChar) == map.end())
		{
			map.insert({ upperChar, 1 });
		}
		else
		{
			map[upperChar]++;
		}
	}

	for (const auto& pair : map)
	{
		if (pair.second > checkInt)
		{
			isDouble = false;
			checkChar = pair.first;
			checkInt = pair.second;
		}
		else if (pair.second == checkInt)
		{
			isDouble = true;
		}
	}

	if (isDouble)
	{
		cout << "?";
	}
	else
	{
		cout << checkChar;
	}

	return 0;
}
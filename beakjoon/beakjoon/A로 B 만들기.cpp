#include <iostream>
#include <string>

// 백준 아님 그냥 문제

using namespace std;

int main()
{
	int answer = 1, check = 0;
	string before, after;
	cin >> before >> after;

	if (before.size() != after.size())
		answer = 0;
	else
	{
		for (int i = 0; i < before.size(); i++)
		{
			for (int j = 0; j < after.size(); j++)
			{
				if (before[i] == after[j])
				{
					check++;
					break;
				}
			}
		}
		if (check != before.size())
			answer = 0;
	}

	cout << answer;
}
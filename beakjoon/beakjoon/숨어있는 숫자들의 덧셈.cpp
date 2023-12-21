#include <iostream>

// 백준 아님 그냥 문제

using namespace std;

int main()
{
	int answer = 0;
	int temp = 0;
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			answer += temp;
			temp = 0;
		}
		else
		{
			temp *= 10;
			temp += s[i] - '0';
		}
	}
	answer += temp;

	cout << answer;
}
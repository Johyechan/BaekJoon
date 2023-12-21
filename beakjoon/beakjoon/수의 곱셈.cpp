#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int>v(3);
	vector<int>check(3);
	int countnum = 0;
	int answer = 1;
	for (int i = 0; i < 3; i++)
	{
		cin >> v[i];
	}
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] % 2 == 0)
		{
			countnum++;
			check[i] = 1;
		}
	}
	if (countnum == 3)
	{
		answer = v[0] * v[1] * v[2];
	}
	else if (countnum == 0)
	{
		answer = v[0] * v[1] * v[2];
	}
	else
	{
		for (int i = 0; i < 2; i++)
		{
			if (check[i] != 1)
				answer *= v[i];
		}
	}
	cout << answer;
}
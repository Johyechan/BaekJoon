#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int height[9];
	int answer[7] = { 0 };
	int total = 0;
	int fake1, fake2;
	bool found = false;

	for (int i = 0; i < 9; i++)
	{
		cin >> height[i];
		total += height[i];
	}

	for (int i = 0; i < 9; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			if (total - height[i] - height[j] == 100)
			{
				fake1 = i;
				fake2 = j;
				found = true;
				break;
			}
		}

		if (found)
			break;
	}

	int idx = 0;
	for (int i = 0; i < 9; i++)
	{
		if (i == fake1 || i == fake2)
			continue;

		answer[idx++] = height[i];
	}

	sort(answer, answer + 7);

	for (int i = 0; i < 7; i++)
	{
		cout << answer[i] << "\n";
	}

	return 0;
}
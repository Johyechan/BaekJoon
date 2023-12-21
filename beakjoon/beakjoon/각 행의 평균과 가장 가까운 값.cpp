#include <iostream>
#include <vector>
#include <algorithm>

// 백준 아님 그냥 문제

using namespace std;

int main()
{
	int arr[9][9];
	float average[9] = {0,};
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			int num;
			cin >> num;
			arr[i][j] = num;
		}
	}
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			average[i] += arr[i][j];
		}
		int temp = round(average[i] / 9);
		average[i] = temp;
	}
	for (int i = 0; i < 9; i++)
	{
		int near = 0, check = INT_MAX;
		for (int j = 0; j < 9; j++)
		{
			if (abs(average[i] - arr[i][j]) == check)
			{
				check = abs(average[i] - arr[i][j]);
				if(near < arr[i][j])
					near = arr[i][j];
			}
			if (abs(average[i] - arr[i][j]) < check)
			{
				check = abs(average[i] - arr[i][j]);
				near = arr[i][j];
			}
		}
		cout << average[i] << " " << near << '\n';
	}
}
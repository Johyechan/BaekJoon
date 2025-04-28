#include<iostream>
#include<vector>

using namespace std;

int countArr[1000001] = { 0 };

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int num;

	for (int i = 0; i < N; i++)
	{
		cin >> num;
		countArr[num]++;
	}

	for (int i = 0; i < 1000001; i++)
	{
		while (countArr[i]--)
		{
			cout << i << "\n";
		}
	}

	return 0;
}
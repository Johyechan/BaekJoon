#include<iostream>
#include<vector>

using namespace std;

int main()
{
	float c, n, score, answer = 0;
	vector<float> vec;
	float average = 0;

	cin >> c;
	for (int i = 0; i < c; i++)
	{
		cin >> n;
		for (int j = 0; j < n; j++)
		{
			cin >> score;
			vec.push_back(score);
			average += score;
		}

		average /= n;

		for (int k = 0; k < vec.size(); k++)
		{
			if (vec[k] > average)
			{
				answer++;
			}
		}

		cout << fixed;
		cout.precision(3);
		cout << ((100.0 / n) * answer) << "%" << "\n";
		vec.clear();
		answer = 0;
		average = 0;
	}
	return 0;
}
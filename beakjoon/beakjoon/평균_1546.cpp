#include<iostream>

using namespace std;

float Compare(float a, float b, bool isBigger)
{
	if (isBigger)
	{
		return a > b ? a : b;
	}
	else
	{
		return a > b ? b : a;
	}
}

int main()
{
	int n;
	float m = 0;
	float score[1000];

	cin >> n; 

	for (int i = 0; i < n; i++)
	{
		cin >> score[i];
		m = Compare(m, score[i], true);
	}

	for (int i = 0; i < n; i++)
	{
		score[i] = score[i] / m * 100;
	}

	float average = 0;

	for (int i = 0; i < n; i++)
	{
		average += score[i];
	}

	cout << average / n;
}
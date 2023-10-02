#include <iostream>

using namespace std;

// ºê·ÐÁî 3

int ABC[] = { 300, 60, 10 };
int answerABC[] = { 0, 0, 0 };

bool Greedy(int t)
{
	while (t > 0)
	{
		if (t >= ABC[0])
		{
			t -= ABC[0];
			answerABC[0]++;
		}
		else if (t >= ABC[1])
		{
			t -= ABC[1];
			answerABC[1]++;
		}
		else
		{
			t -= ABC[2];
			answerABC[2]++;
		}
	}

	if (t < 0)
		return false;

	return true;
}

int main()
{
	int T;
	cin >> T;
	if (Greedy(T))
	{
		for (int i = 0; i < 3; i++)
		{
			cout << answerABC[i] << " ";
		}
	}
	else
		cout << -1;
}
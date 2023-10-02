#include <iostream>

using namespace std;

// ºê·ÐÁî 3

int change[4] = { 25, 10, 5, 1 };
int answerChange[4] = { 0, 0, 0, 0 };

void Greedy(int n)
{
	while (n != 0)
	{
		if (n >= change[0])
		{
			n -= change[0];
			answerChange[0]++;
		}
		else if (n >= change[1])
		{
			n -= change[1];
			answerChange[1]++;
		}
		else if (n >= change[2])
		{
			n -= change[2];
			answerChange[2]++;
		}
		else if(n >= change[3])
		{
			n -= change[3];
			answerChange[3]++;
		}
	}
}

int main()
{
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int n;
		cin >> n;
		Greedy(n);
		for (int j = 0; j < 4; j++)
		{
			cout << answerChange[j] << " ";
		}
		fill_n(answerChange, 4, 0);
		cout << "\n";
	}

}
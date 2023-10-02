#include <iostream>
#include <vector>

using namespace std;

// ∫Í∑–¡Ó 3

vector<int> milkStore;
int answer = 0;

void Greedy()
{
	int temp = 2;
	for (int i = 0; i < milkStore.size(); i++)
	{
		if (temp == 2 && milkStore[i] == 0)
		{
			temp = milkStore[i];
			answer++;
		}
		else if (temp == 0 && milkStore[i] == 1)
		{
			temp = milkStore[i];
			answer++;
		}
		else if (temp == 1 && milkStore[i] == 2)
		{
			temp = milkStore[i];
			answer++;
		}
	}
}

int main()
{
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int n;
		cin >> n;
		milkStore.push_back(n);
	}

	Greedy();

	cout << answer;
}
#include <iostream>
#include <map>

using namespace std;

// ∫Í∑–¡Ó 2

int main()
{
	map<string, int> m;
	int N;
	bool press = false;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		string s;
		int n;
		cin >> s >> n;
		if (m.find(s) == m.end())
		{
			m.insert({ s, n });
		}
		else
		{
			m[s] += n;
		}
	}

	for (auto lm : m)
	{
		if (lm.second == 5)
		{
			press = true;
		}
	}

	if (press)
	{
		cout << "YES";
	}
	else
		cout << "NO";
}
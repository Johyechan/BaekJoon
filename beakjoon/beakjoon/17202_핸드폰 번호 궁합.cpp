#include <iostream>
#include <vector>

using namespace std;

// ∫Í∑–¡Ó 1

vector<int> v1;
vector<int> v2;
vector<int> check;
long long num = 10000000;

vector<int> Compatibility(vector<int> v)
{
	for (int i = 0; i < v1.size() - 1; i++)
	{
		v2.push_back((v1[i] + v1[i + 1]) % 10);
	}
	v1.clear();
	v1 = v2;
	v2.clear();
	return v1;
}

int main()
{
	string a, b;
	cin >> a >> b;
	for (int i = 0; i < 8; i++)
	{
		v1.push_back(int(a[i]) - 48);
		v1.push_back(int(b[i]) - 48);
	}
	check = v1;
	while (check.size() > 2)
	{
		check = Compatibility(v1);
	}
	for (auto c : check)
	{
		cout << c;
	}
}
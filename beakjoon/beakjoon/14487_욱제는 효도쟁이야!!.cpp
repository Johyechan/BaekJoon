#include <iostream>
#include <vector>

using namespace std;

// ����� 2

int main()
{
	int n, notgo = 0, answer = 0, temp = 0; // ������ ��, �Ȱ��� �Ǵ� ���, ����, ����� ������ ����
	vector<int> expense; // i��°���� i + 1��° ���� ���µ� ��� ���, �ִ��� ���� n�̶�� �������� �� n��° ������ n��°���� 1��°�� ���µ� ��� ����̴�.
	cin >> n; 

	for (int i = 0; i < n; i++) // �� �������� ������ �� �� ��� ������ ����
	{
		int v;
		cin >> v;
		expense.push_back(v);
	}

	for (int i = 0; i < expense.size(); i++) // ���� ����� ���� ��� ���� ã�� �ݺ���
	{
		if (temp < expense[i])
		{
			notgo = i;
			temp = expense[i];
		}
	}

	for (int i = 0; i < expense.size(); i++) // ���� ����� ���� ��� ���� ������ ��������� �ּ� ������ ����
	{
		if (i == notgo)
			continue;
		answer += expense[i];
	}

	cout << answer;
}
#include <iostream>

using namespace std;

// ����� 1

int answerNum = 0;
int answerLength = 10000;

int VictoryPlan(int j, int m) // �¸� ����
{
	int answer = 1;						
	int r = j % m;
	while (r != j)
	{
		r += m;
		answer++;
	}
	return answer;
}

int main()
{
	int n, j, m;									// n�� �÷��� �� �Ǽ� j�� ��ü �������� ���ϸ� ���� ��, m�� �� �Ͽ� �� ���� ���� �� �ִ� �ִ� �ڿ����� ����

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int temp = 0;
		cin >> j >> m;
		temp = VictoryPlan(j - 1, 1 + m);	// �¸� ������ ���� �� �� ���ؾ� �̱� �� �ִ��� temp�� ����
		if (answerLength > temp)			// ���� ª�� �¸� �� Ƚ���� ����
		{
			answerLength = temp;
			answerNum = i + 1;
		}
	}

	cout << answerNum << " " << answerLength * 2;	// �� ��° ������ ���� ���� ���� �� �ִ����� �� ���� ������� ���
}
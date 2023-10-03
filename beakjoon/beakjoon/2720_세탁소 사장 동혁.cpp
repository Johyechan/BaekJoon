#include <iostream>

using namespace std;

// ����� 3

int change[4] = { 25, 10, 5, 1 };		// �Ž������� ��ġ
int answerChange[4] = { 0, 0, 0, 0 };	// �Ž������� ����

void Greedy(int n)
{
	while (n != 0)
	{
		if (n >= change[0])				// ��ġ���� ũ�ų� ���ٸ� ��ġ ��ŭ ���� �� ��ġ�� �Ž������� ������ �÷���
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
	cin >> T;						// �׽�Ʈ ���̽��� ������ ����

	for (int i = 0; i < T; i++)		// �׽�Ʈ ���̽� ��ŭ �ݺ�
	{
		int n;						// ���� �Ž������� �ʿ����� ���� ����
		cin >> n;					// �Ž������� ��ġ�� ����
		Greedy(n);					// �Ž������� ��ġ�� �־���
		for (int j = 0; j < 4; j++)
		{
			cout << answerChange[j] << " ";		// �� �Ž������� ������ ���
		}
		fill_n(answerChange, 4, 0);			// ���� �׽�Ʈ ���̽��� ���� �Ž������� ������ 0���� �ʱ�ȭ
		cout << "\n";
	}

}
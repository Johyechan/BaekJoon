#include <iostream>

using namespace std;

// ����� 3

int ABC[] = { 300, 60, 10 };			// �� ������ �����ص� �迭
int answerABC[] = { 0, 0, 0 };			// �� �ʸ� �� �� �������� �����ص� �迭

bool Greedy(int t)
{
	while (t > 0)	
	{	
		if (t >= ABC[0])				// ������ �ʺ��� ũ�ų� ���Ƹ� ������ �ʸ�ŭ ���� �� �ʸ� �� �� �������� Ȯ�� �ϴ� �迭�� �� �ʸ� �����ٰ� �� �� ���� ������
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
		return false;		// ���� ������ �ʷ� �Ϻ��ϰ� ���� �� ������ false�� ��ȯ

	return true;			// �ƴ϶�� true�� ��ȯ
}

int main()
{
	int T;
	cin >> T;
	if (Greedy(T))				// �Ϻ��ϰ� ���� �� �ִ��� Ȯ��
	{
		for (int i = 0; i < 3; i++)			// �����ϸ� ������ �ʸ� �� ���� �������� ������ִ� �ݺ���
		{
			cout << answerABC[i] << " ";	
		}
	}
	else						// �Ϻ��ϰ� ���� �� ���ٸ� 
		cout << -1;				// -1�� ���
}